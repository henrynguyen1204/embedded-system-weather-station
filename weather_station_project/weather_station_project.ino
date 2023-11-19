#include <Adafruit_GFX.h>      // include Adafruit graphics library
#include <Adafruit_ST7735.h>   // include Adafruit ST7735 TFT library
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <JsonListener.h>
#include <time.h>
#include "OpenWeatherMapCurrent.h"
#include "OpenWeatherMapForecast.h"
#include <NTPClient.h>
#include <WiFiUdp.h>
//Font and icon
#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/FreeMono12pt7b.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include "weatherIcon.h"  //Weather icon
#include <cctype>

// ST7735 TFT module connections
#define TFT_RST   2     
#define TFT_CS    15     
#define TFT_DC    0     

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

//OpenWeatherMapCurrent variable
OpenWeatherMapCurrent client;
OpenWeatherMapForecast clientf;
String OPEN_WEATHER_MAP_APP_ID = "263082ad7ca2686c75e508ed407d3fef";
String OPEN_WEATHER_MAP_LOCATION_ID = "1566083";
String OPEN_WEATHER_MAP_LANGUAGE = "en";
boolean IS_METRIC = true;
uint8_t MAX_FORECASTS = 4;

//Wifi login
#if defined(ESP8266)
const char* ESP_HOST_NAME = "esp-" + ESP.getFlashChipId();
#else
const char* ESP_HOST_NAME = "esp-" + ESP.getEfuseMac();
#endif
const char* WIFI_SSID     = "admin";
const char* WIFI_PASSWORD = "12345678";

//Time variable
const long utcOffsetInSeconds = 25200;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int getD=-1;
int getH=-1;
int getM=-1;
int getS=-1;
String fDate="";
String dayName="";
char date [80];

// Current weather variable
String maindes="";
String desc="";
float temp=0;
uint16_t pres=0;
uint8_t humidity=0;
float wind=0;
int tempF=0;
String city="";
String country= "";

//Forecast variable
int tempMin[4];
int tempMax[4];
int humiditys[4];

//Connect Wifi
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

uint16_t colors[7]={0xF800, 0xFB20, 0xFFE0, 0x87E0, 0x04E0, 0x07FF, 0x03DF};

void connectWifi() {
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected!");
  Serial.println(WiFi.localIP());
  Serial.println();
}

void initScreen()
{
  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  //tft.setRotation(1);
  tft.fillScreen(ST7735_BLACK);
  //layout
    tft.drawFastHLine(0, 0, tft.width(), ST7735_WHITE);
    tft.drawFastHLine(1, 159, tft.width(), ST7735_WHITE);
    tft.drawFastVLine(0, 0, tft.height(), ST7735_WHITE);
    tft.drawFastVLine(127, 0, tft.height(), ST7735_WHITE);
    tft.drawFastHLine(1, 140, tft.width(), ST7735_WHITE);
    tft.drawFastHLine(1, 19, tft.width(), ST7735_WHITE);
  }

//Get time,date and location data
void getTime()
{
  //Get time
  timeClient.update();
  getD=timeClient.getDay();
  getH=timeClient.getHours();
  getM=timeClient.getMinutes();
  getS=timeClient.getSeconds();
  fDate=timeClient.getFormattedTime();
  dayName=daysOfTheWeek[getD];

  //Get date and location
  OpenWeatherMapCurrentData data;
  client.setLanguage(OPEN_WEATHER_MAP_LANGUAGE);
  client.setMetric(IS_METRIC);
  client.updateCurrentById(&data, OPEN_WEATHER_MAP_APP_ID, OPEN_WEATHER_MAP_LOCATION_ID);
  city=data.cityName.c_str();
  country=data.country.c_str();
  time_t time = data.observationTime;
  struct tm * timeinfo;
  timeinfo = localtime (&time);
  strftime (date,80,"%F",timeinfo);
}

//Get current weather data
void getCurrentData()
{
  OpenWeatherMapCurrentData data;
  client.setLanguage(OPEN_WEATHER_MAP_LANGUAGE);
  client.setMetric(IS_METRIC);
  client.updateCurrentById(&data, OPEN_WEATHER_MAP_APP_ID, OPEN_WEATHER_MAP_LOCATION_ID);

  maindes=data.main.c_str();
  desc=data.description.c_str();
  temp=data.temp;
  tempF=(int)(temp);
  pres=data.pressure;
  humidity=data.humidity;
  wind=data.windSpeed;
  Serial.println("main: "+ maindes);
  Serial.println("description: "+ desc);
  Serial.printf("temp: %f\n", temp);
  Serial.printf("pressure: %d\n", pres);
  Serial.printf("humidity: %d\n", humidity);
  Serial.printf("windSpeed: %f\n", wind);  
}

//Get forecast data
void getForecastData()
{
  OpenWeatherMapForecastData data[MAX_FORECASTS];
  clientf.setMetric(IS_METRIC);
  clientf.setLanguage(OPEN_WEATHER_MAP_LANGUAGE);
  uint8_t allowedHours[] = {0,12};
  clientf.setAllowedHours(allowedHours, 2);
  uint8_t foundForecasts = clientf.updateForecastsById(data, OPEN_WEATHER_MAP_APP_ID, OPEN_WEATHER_MAP_LOCATION_ID, MAX_FORECASTS);

  time_t time;
  for (uint8_t i = 0; i < foundForecasts; i++) {

    Serial.printf("tempMin: %f\n", data[i].tempMin);
    tempMin[i] = data[i].tempMin;
    Serial.printf("tempMax: %f\n", data[i].tempMax);
    tempMax[i] = data[i].tempMax;
    Serial.printf("humidity: %d\n", data[i].humidity);
    humiditys[i] = data[i].humidity;

  }
}

//Display icon for each weather description for screen 2
void displayweatherbitmap_screen2()
{
  if(maindes.equals("Clouds"))
  {
    col=0xFFE0;
    tft.drawBitmap(8, 25, clouds, 51, 38,0xFFE0);
    }
    else if(maindes.equals("Rain"))
  {
    col=0x07FF;
    tft.drawBitmap(8, 25, rain, 51, 40,0x07FF);
    }
    else if(maindes.equals("Thunderstorm"))
  {
    col=0x03DF;
    tft.drawBitmap(8, 25, thunder, 51, 40,0x03DF);
    }
    else if(maindes.equals("Clear"))
  {
    col=0xFFE0;
    tft.drawBitmap(8, 25, clearS1, 37, 40,0xFFE0);
    }
    else if(maindes.equals("Drizzle"))
  {
    col=0x07FF;
    tft.drawBitmap(8, 25, drizzle, 51, 40,0x07FF);
    }
    else if(maindes.equals("Snow"))
  {
    col=ST7735_WHITE;
    tft.drawBitmap(8, 25, snow, 51, 40,ST7735_WHITE);
    }
    else
  {
    col=0xD6D5;
    tft.drawBitmap(8, 25, mist, 51, 40,0xD6D5);
    }
  }

//Screen1: Display Time,date data on Main screen and time, date, city, country data on the outline
void screen1()
{
  tft.setFont();
  tft.setTextColor(ST7735_WHITE);
  tft.setCursor(10,7);
  tft.print(city); // print city
  tft.setCursor(110,7);
  tft.print(country); //print country
  tft.fillRect(3, 142 , 123, 16, ST7735_BLACK);
  tft.setCursor(10,146);
  if(getH<10)
  tft.print(0);
  tft.print(getH);
  tft.print(":");
  if(getM<10)
  tft.print(0);
  tft.print(getM);
  tft.setCursor(60,146);

  tft.print(date);//print date
  tft.fillRect(3, 22 , 123, 116, ST7735_BLACK);
  tft.setFont(&FreeSansBold18pt7b);
  //tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(1);
  tft.setCursor(22,60);
  tft.setTextColor(colors[2]);
  if(getH<10)
  tft.print(0);
  tft.print(getH);
  tft.print(":");
  if(getM<10)
  tft.print(0);
  tft.print(getM);
  tft.setFont(&FreeSans9pt7b);
  int daylen=0;
  daylen=dayName.length();
  if(daylen==6)
  tft.setCursor(35,90);
  else if (daylen==7)
  tft.setCursor(27,90);
  else if (daylen==8)
  tft.setCursor(21,90);
  else if (daylen==9)
  tft.setCursor(15,90);
  tft.setTextColor(colors[getD]);
  tft.print(dayName);
  tft.setTextColor(ST7735_WHITE);
  tft.setCursor(19,120);
  tft.print(date); //print date
}

// Display current weather information include: Weather description, weather icon, temperature, humidity, pressure, windspeed.
void screen2()
{
  tft.fillRect(3, 22 , 123, 116, ST7735_BLACK);
  //tft.drawBitmap(8, 25, clouds, 51, 38,ST7735_WHITE);
  displayweatherbitmap_screen2();
  tft.setFont(&FreeSansBold9pt7b);
  tft.setTextColor(ST7735_WHITE);
  //tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(1);
  tft.setCursor(2,80);
  tft.setTextColor(col);
  tft.print(maindes);
  tft.setCursor(64,50);
//      int range = map(tempF, 0, 60, 0, 6);
//      tft.setTextColor(colors[range]);
      if(tempF<=0)
      {
      tft.setTextColor(0x07FF);
      }
      else if(tempF>0 && tempF<5)
      {
      tft.setTextColor(0x03DF);
      }
      else if(tempF>6 && tempF<16)
      {
      tft.setTextColor(0x87E0);
      }
      else if(tempF>16 && tempF<27)
      {
      tft.setTextColor(0xFC00);
      }
      else if(tempF>27 && tempF<37)
      {
      tft.setTextColor(0xFA20);
      }
      else
      {
      tft.setTextColor(0xF800);
      }
    tft.print(tempF);
    tft.setFont();
    tft.setCursor(87,35);
    tft.print("C");
    
    tft.setTextColor(ST7735_WHITE);
    if(humidity<10)
    {
      tft.setTextColor(0x04E0);
      }
      else if(humidity<20 && humidity>10)
    {
      tft.setTextColor(0x87E0);
      }
      else if(humidity<30 && humidity>20)
    {
      tft.setTextColor(0xFFE0);
      }
      else if(humidity<40 && humidity>30)
    {
      tft.setTextColor(0xFB20);
      }
      else if(humidity>40)
    {
      tft.setTextColor(0xF800);
      }
    tft.setFont(&FreeSansBold9pt7b);
    tft.setCursor(94,50);
    tft.print(humidity);
    tft.setFont();
    tft.setCursor(118,35);
    tft.print("%");
    tft.setCursor(4,85);
    tft.setTextColor(col);
    String s=desc;
    String s1="";
    String s2="";
    if(s.length()>20)
    {
    char c[s.length()];
    s.toCharArray(c,s.length());
    for(int i=20;i>0;i--)
    {
      if(c[i]==' ')
      {
        s1=s.substring(0,i+1);
        int j=20-i;
        for(int k=0;k<j;k++)
        {
          s1=s1+" ";
          }
        s2=s.substring(i+1,s.length());
        break;
        }
      }
      s2=" "+s2;
      tft.print(s1+s2);
    }
    else
    {
      tft.print(s);
      }
    tft.setCursor(8,110);
    tft.setTextColor(0x87F0);
    tft.print("Pressure  WindSpeed");
    tft.setCursor(11,122);
    tft.print(pres);
    tft.print(" hpa");
    tft.setCursor(75,122);
    tft.print(wind);
    tft.print(" m/s");
    tft.setTextColor(ST7735_WHITE);
  }

//Display forecast for the next 3 days include: Name of the day, max-min temperature, humidity
void screen3()
{
  int day2=getD+1;
  if(day2>6)
  day2=day2-7;
  int day3=day2+1;
  if(day3>6)
  day3=day3-7;
  int day4=day3+1;
  if(day4>6)
  day4=day4-7;
  tft.fillRect(2, 22 , 124, 116, ST7735_BLACK);
  tft.drawBitmap(8, 28, weather1, 39, 24,colors[2]);
  tft.drawBitmap(8, 68, weather1, 39, 24,colors[3]);
  tft.drawBitmap(8, 108, weather1, 39, 24,colors[4]);
  tft.setFont();
  tft.setTextColor(colors[day2]);  
  tft.setCursor(65,25);
  tft.print(daysOfTheWeek[day2]);
  tft.setCursor(97,38);
  tft.print("C");
  tft.setCursor(105,44);
  tft.print(humiditys[0]);
  tft.print("%");
  tft.setFont(&FreeSansBold9pt7b);
  tft.setCursor(50,50);
  tft.print(tempMin[0]);
  tft.print("-");
  tft.print(tempMax[0]);
  tft.setFont();
  tft.setTextColor(colors[day3]);
  tft.setCursor(65,65);
  tft.print(daysOfTheWeek[day3]);
  tft.setCursor(97,78);
  tft.print("C");
  tft.setCursor(105,84);
  tft.print(humiditys[1]);
  tft.print("%");
  tft.setFont(&FreeSansBold9pt7b);
  tft.setCursor(50,90);
  tft.print(tempMin[1]);
  tft.print("-");
  tft.print(tempMax[1]);
  tft.setFont();
  tft.setTextColor(colors[day4]);
  tft.setCursor(65,105);
  tft.print(daysOfTheWeek[day4]);
  tft.setCursor(97,118);
  tft.print("C");
  tft.setCursor(105,124);
  tft.print(humiditys[2]);
  tft.print("%");
  tft.setFont(&FreeSansBold9pt7b);
  tft.setCursor(50,130);
  tft.print(tempMin[2]);
  tft.print("-");
  tft.print(tempMax[2]);

}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);
  connectWifi();

  timeClient.begin();
  getTime();
  initScreen();
}

void loop() {
  // put your main code here, to run repeatedly:
  getTime();
  screen1();
  delay(10000);
  getCurrentData();
  screen2();
  delay(10000);
  getForecastData();
  screen3();
  delay(10000);
}
