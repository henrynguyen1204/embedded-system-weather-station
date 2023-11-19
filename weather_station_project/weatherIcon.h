uint16_t col=0;
const unsigned char thunder[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00111110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000001,B11100011,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00000011,B00000000,B01100000,B00000000,B00000000,
  B00000000,B00000000,B00000100,B00000000,B00110000,B00000000,B00000000,
  B00000000,B00000000,B00001000,B00000000,B00011000,B00000000,B00000000,
  B00000000,B00000000,B00010000,B00000000,B00001100,B00000000,B00000000,
  B00000000,B00000000,B00110000,B00000000,B00000111,B11000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,B01100000,B00000000,
  B00000000,B00001111,B11100000,B00000000,B00000000,B00010000,B00000000,
  B00000000,B00011000,B00000000,B00000000,B00000000,B00011000,B00000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B00001000,B00000000,
  B00000000,B01100000,B00000000,B00000000,B00000000,B00001100,B00000000,
  B00000000,B01000000,B00000000,B00000000,B00000000,B00001100,B00000000,
  B00000000,B11000000,B00000000,B00000000,B00000000,B00001100,B00000000,
  B00001111,B10000000,B00000000,B00000100,B00000000,B00001000,B00000000,
  B00011000,B00000000,B00000000,B00000100,B00000000,B00001100,B00000000,
  B00110000,B00000000,B00000000,B00001100,B00000000,B00000110,B00000000,
  B00100000,B00000000,B00000000,B00001000,B00000000,B00000010,B00000000,
  B01100000,B00000000,B00000000,B00011000,B00000000,B00000011,B00000000,
  B01000000,B00000000,B00000000,B00010000,B00000000,B00000001,B00000000,
  B01000000,B00000000,B00010000,B00110000,B00000000,B00000001,B00000000,
  B01000000,B00000000,B00110000,B00100000,B00000000,B00000001,B00000000,
  B01100000,B00000000,B00100000,B00100000,B00000000,B00000011,B00000000,
  B00100000,B00000000,B01100000,B01111111,B10000000,B00000010,B00000000,
  B00010000,B00000000,B01000000,B01111111,B10000000,B00000110,B00000000,
  B00011100,B00000000,B01111000,B00000001,B00000000,B00011100,B00000000,
  B00000111,B11111100,B00001000,B00000011,B00111111,B11110000,B00000000,
  B00000000,B00000000,B00011000,B00000010,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00010000,B00000010,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00110000,B00000100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B01100000,B00001100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B01000000,B00001000,B00000000,B00000000,B00000000,
  B00010000,B00000110,B00000000,B10000000,B00010000,B00000100,B00000000,
  B00110000,B00000100,B00000001,B10000000,B00100000,B00000100,B00000000,
  B00100000,B00001100,B00000001,B00000000,B00100000,B00001100,B00000000,
  B01100000,B00001000,B00000001,B00000000,B01100000,B00001000,B00000000,
  B01000000,B00001000,B00000011,B00000000,B01000000,B00011000,B00000000,
  B01000000,B00000000,B00000010,B00000000,B01000000,B00010000,B00000000
};


const unsigned char drizzle[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01111111,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B11100000,B11100000,B00000000,B00000000,
  B00000000,B00000000,B00000011,B10000000,B00111000,B00000000,B00000000,
  B00000000,B00000000,B00000110,B00000000,B00001100,B00000000,B00000000,
  B00000000,B00000000,B00000100,B00000000,B00000110,B00000000,B00000000,
  B00000000,B00000000,B00001100,B00000000,B00000010,B00000000,B00000000,
  B00000000,B00000000,B00011000,B00000000,B00000011,B11100000,B00000000,
  B00000000,B00000000,B00010000,B00000000,B00000001,B11111000,B00000000,
  B00000000,B00000011,B11110000,B00000000,B00000000,B00001100,B00000000,
  B00000000,B00001110,B01110000,B00000000,B00000000,B00000110,B00000000,
  B00000000,B00011000,B00000000,B00000000,B00000000,B00000110,B00000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00000000,B01100000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00000000,B01000000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00000000,B11000000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00000111,B11000000,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00011100,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00010000,B00000000,B00000000,B00000000,B00000000,B00000001,B00000000,
  B00100000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01000000,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01000000,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01000000,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,
  B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00110000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,
  B00011000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00001110,B00000000,B00000000,B00000000,B00000000,B00001110,B00000000,
  B00000111,B11111111,B11111111,B11111111,B11111111,B11111100,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B11000000,B00110000,B00001100,B00000011,B00000000,B00000000,
  B00000000,B11000000,B00100000,B00001000,B00000010,B00000000,B00000000,
  B00000000,B10000000,B00100000,B00011000,B00000110,B00000000,B00000000,
  B00000001,B10000000,B01100000,B00010000,B00000100,B00000000,B00000000,
  B00000001,B00000000,B01000000,B00110000,B00000100,B00000000,B00000000,
  B00000001,B00000000,B01000000,B00110000,B00001100,B00000000,B00000000
};


const unsigned char rain[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B11111110,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B00000001,B10001111,B11110000,B00000000,B00000000,
  B00000000,B00000110,B00000000,B11110000,B00001100,B00000000,B00000000,
  B00000000,B00001100,B00000000,B01000000,B00000110,B00000000,B00000000,
  B00000000,B01111000,B00000000,B10000000,B00000011,B00000000,B00000000,
  B00000001,B10000000,B00000001,B10000000,B00000001,B11100000,B00000000,
  B00000001,B00000000,B00000001,B00000000,B00000000,B00011000,B00000000,
  B00000001,B00000000,B01111111,B00000000,B00000000,B00001100,B00000000,
  B00000001,B00000000,B11000000,B00000000,B00000000,B00000110,B00000000,
  B00000001,B00000001,B10000000,B00000000,B00000000,B00000010,B00000000,
  B00000011,B00000001,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00000110,B00000111,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00000100,B00111000,B00000000,B00000000,B00000000,B00000110,B00000000,
  B00000100,B01100000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00000100,B01000000,B00000000,B00000000,B00000000,B00000001,B00000000,
  B00000110,B11000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00000011,B10000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00000001,B10000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00000000,B01000000,B00000000,B00000000,B00000000,B00000001,B10000000,
  B00000000,B01000000,B00000000,B00000000,B00000000,B00000001,B00000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11111100,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000010,B00000001,B00000000,B10000000,B01000000,B00110000,B00000000,
  B00000100,B00000010,B00000001,B10000000,B01000000,B00100000,B00000000,
  B00000100,B00000010,B00000001,B00000000,B10000000,B01100000,B00000000,
  B00001000,B00000100,B00000011,B00000000,B10000000,B01000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000001,B00000000,B00000000,
  B00100000,B00010000,B00001000,B00000110,B00000001,B00000000,B00000000,
  B01100000,B00110000,B00001000,B00000100,B00000010,B00000000,B00000000,
  B01000000,B00100000,B00010000,B00001100,B00000010,B00000000,B00000000,
  B11000000,B01100000,B00010000,B00001000,B00000100,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

const unsigned char snow[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00010000,B00100000,B01000000,B00000000,B00000000,
  B00000000,B00000000,B00011000,B00100000,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00000110,B00100001,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000011,B00100110,B00000000,B00000000,B00000000,
  B00000000,B00100000,B00000000,B10101100,B00000000,B00100000,B00000000,
  B00000000,B00010000,B00000000,B01110000,B00000000,B01100000,B00000000,
  B00000000,B00010000,B00000000,B00100000,B00000000,B01000000,B00000000,
  B00011100,B00011000,B00000000,B00100000,B00000000,B11000001,B11000000,
  B00000011,B00001000,B00000000,B01110000,B00000000,B10000111,B00000000,
  B00000000,B11101100,B00000000,B11111000,B00000000,B10111000,B00000000,
  B00000000,B00011100,B00000011,B00100110,B00000001,B11000000,B00000000,
  B00000000,B11111111,B11111100,B00100001,B11111111,B11111000,B00000000,
  B00011111,B00000001,B11100000,B00100000,B00111100,B00000111,B11000000,
  B00000000,B00000000,B11011000,B00100000,B11111000,B00000000,B00000000,
  B00000000,B00000000,B01000111,B00100011,B00011000,B00000000,B00000000,
  B00000000,B00000000,B01000001,B11111100,B00010000,B00000000,B00000000,
  B00000000,B00000000,B01000000,B01111000,B00010000,B00000000,B00000000,
  B00000000,B00000000,B01000011,B10100110,B00010000,B00000000,B00000000,
  B00000000,B00000000,B11011100,B00100001,B11011000,B00000000,B00000000,
  B00011100,B00000000,B11100000,B00100000,B00111100,B00000001,B11000000,
  B00000011,B11110011,B11111000,B00100000,B11111110,B01111110,B00000000,
  B00000000,B00011110,B00000111,B00100011,B10000001,B11000000,B00000000,
  B00000000,B01111100,B00000001,B10101100,B00000001,B10110000,B00000000,
  B00000001,B10001000,B00000000,B01111000,B00000000,B10001110,B00000000,
  B00001110,B00001000,B00000000,B00110000,B00000000,B11000011,B10000000,
  B00010000,B00011000,B00000000,B00100000,B00000000,B01000000,B00000000,
  B00000000,B00010000,B00000000,B01110000,B00000000,B01100000,B00000000,
  B00000000,B00110000,B00000000,B11111000,B00000000,B00100000,B00000000,
  B00000000,B00100000,B00000001,B10100110,B00000000,B00100000,B00000000,
  B00000000,B00000000,B00000110,B00100011,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00001100,B00100001,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00010000,B00100000,B01100000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

const unsigned char mist[] PROGMEM = {
  B00000000,B00000000,B00000011,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00001111,B11111111,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00111000,B00000011,B11000000,B00000000,B00000000,
  B00000000,B00000000,B01110000,B00000000,B01100000,B00000000,B00000000,
  B00000000,B00000000,B11000000,B00000000,B00111000,B00000000,B00000000,
  B00000000,B00000011,B10000000,B00000000,B00011111,B11110000,B00000000,
  B00000000,B00000011,B00000000,B00000000,B00011111,B11111110,B00000000,
  B00000000,B00000111,B00000000,B00000000,B00000000,B00001111,B00000000,
  B00000000,B11111111,B11000000,B00000000,B00000000,B00000001,B11000000,
  B00000111,B11000000,B11111000,B00000000,B00000000,B00000001,B11000000,
  B00001111,B00000000,B00111100,B00000000,B00000000,B00000000,B11100000,
  B00011000,B00000000,B00001111,B00000000,B00000000,B00000000,B11100000,
  B01110000,B00000000,B00000111,B10111100,B00000000,B00000000,B11100000,
  B01110000,B00000000,B00000011,B11111111,B11000000,B00000000,B11100000,
  B01100000,B00000000,B00000000,B10000001,B11100000,B00000000,B11100000,
  B11100000,B00000000,B00000000,B00000000,B00111000,B00000000,B11100000,
  B11100000,B00000000,B00000000,B00000000,B00011000,B00000000,B11000000,
  B11100000,B00000000,B00000000,B00000000,B00011100,B00000001,B11000000,
  B11100000,B00000000,B00000000,B00000000,B00011100,B00000011,B00000000,
  B11100000,B00000000,B00000000,B00000000,B00000100,B00011110,B00000000,
  B11100000,B00000000,B00000000,B00000000,B00000111,B11111100,B00000000,
  B01100000,B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,
  B01110000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,
  B00011000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,
  B00011110,B00000000,B00000000,B00000000,B00111000,B00000000,B00000000,
  B00001111,B00000000,B00000000,B00000000,B01100000,B00000000,B00000000,
  B00000001,B11000000,B00000000,B00000011,B11000000,B00000000,B00000000,
  B00000000,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B11000011,B11110000,B11111001,B11111000,B01100000,B00000000,
  B00000000,B11111111,B11111111,B10111111,B11111111,B11100000,B00000000,
  B00000000,B00111100,B00001111,B00011110,B00000111,B10000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B11000011,B11110000,B11111001,B11111000,B01100000,B00000000,
  B00000000,B11111111,B11111111,B10111111,B11111111,B11100000,B00000000,
  B00000000,B00111100,B00001111,B00011110,B00000111,B10000000,B00000000
};

const unsigned char clearS[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000110,B00000000,B01000000,B00001100,B00000000,B00000000,
  B00000000,B00000011,B00000000,B01000000,B00011000,B00000000,B00000000,
  B00000000,B00000001,B00000000,B01000000,B00010000,B00000000,B00000000,
  B00000000,B00000000,B10000000,B10100000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B01011111,B00011111,B01000000,B00000000,B00000000,
  B00111000,B00000000,B01100000,B00000000,B11100000,B00000001,B10000000,
  B00000110,B00000001,B10000000,B00000000,B00011000,B00001100,B00000000,
  B00000001,B11000110,B00000000,B00000000,B00001100,B01110000,B00000000,
  B00000000,B00101100,B00000000,B00000000,B00000110,B11000000,B00000000,
  B00000000,B00001000,B00000000,B00000000,B00000011,B00000000,B00000000,
  B00000000,B00010000,B00000000,B00000000,B00000001,B00000000,B00000000,
  B00000000,B00110000,B00000000,B00000000,B00000001,B10000000,B00000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B10000000,B00000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B10000000,B00000000,
  B00111111,B11100000,B00000000,B00000000,B00000000,B11111111,B11000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B10000000,B00000000,
  B00000000,B00100000,B00000000,B00000000,B00000000,B10000000,B00000000,
  B00000000,B00110000,B00000000,B00000000,B00000001,B10000000,B00000000,
  B00000000,B00010000,B00000000,B00000000,B00000001,B00000000,B00000000,
  B00000000,B00001000,B00000000,B00000000,B00000011,B00000000,B00000000,
  B00000000,B01101100,B00000000,B00000000,B00000110,B11000000,B00000000,
  B00000001,B11000110,B00000000,B00000000,B00001100,B01110000,B00000000,
  B00001110,B00000001,B10000000,B00000000,B00110000,B00001110,B00000000,
  B00110000,B00000000,B01100000,B00000000,B11000000,B00000001,B10000000,
  B00000000,B00000000,B01011111,B00011111,B01100000,B00000000,B00000000,
  B00000000,B00000000,B10000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000001,B00000000,B01000000,B00010000,B00000000,B00000000,
  B00000000,B00000011,B00000000,B01000000,B00001000,B00000000,B00000000,
  B00000000,B00000110,B00000000,B01000000,B00001100,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01000000,B00000000,B00000000,B00000000
};

const unsigned char clearS1[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00100000,B00100000,B00100000,B00000000,
  B00000000,B00100000,B00100000,B01000000,B00000000,
  B00000000,B00010000,B00100000,B01000000,B00000000,
  B00000000,B00001000,B01110000,B10000000,B00000000,
  B00000000,B00001011,B10001111,B10000000,B00000000,
  B00110000,B00001100,B00000001,B10000000,B01100000,
  B00001100,B00010000,B00000000,B11000001,B10000000,
  B00000110,B00100000,B00000000,B00100110,B00000000,
  B00000001,B01000000,B00000000,B00111100,B00000000,
  B00000000,B01000000,B00000000,B00010000,B00000000,
  B00000000,B10000000,B00000000,B00001000,B00000000,
  B00000000,B10000000,B00000000,B00001000,B00000000,
  B00000000,B10000000,B00000000,B00001000,B00000000,
  B00000001,B00000000,B00000000,B00001000,B00000000,
  B00111111,B00000000,B00000000,B00001111,B11100000,
  B00000001,B00000000,B00000000,B00001000,B00000000,
  B00000000,B10000000,B00000000,B00001000,B00000000,
  B00000000,B10000000,B00000000,B00001000,B00000000,
  B00000000,B10000000,B00000000,B00001000,B00000000,
  B00000000,B01000000,B00000000,B00010000,B00000000,
  B00000001,B01000000,B00000000,B00111100,B00000000,
  B00000110,B00100000,B00000000,B00100010,B00000000,
  B00001100,B00010000,B00000000,B11000001,B10000000,
  B00110000,B00001100,B00000001,B10000000,B01100000,
  B00000000,B00001011,B10001111,B10000000,B00000000,
  B00000000,B00011000,B01000000,B10000000,B00000000,
  B00000000,B00010000,B00100000,B01000000,B00000000,
  B00000000,B00100000,B00100000,B01000000,B00000000,
  B00000000,B00100000,B00100000,B00100000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000,
  B00000000,B00000000,B00100000,B00000000,B00000000
};

const unsigned char clouds[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000111,B00001110,B00001111,B11000000,B00000000,B00000000,
  B00000000,B00001100,B00000011,B00011110,B11110000,B00000000,B00000000,
  B00000000,B00011000,B00000001,B11110000,B00011000,B00000000,B00000000,
  B00000000,B00010000,B00000000,B11000000,B00001100,B00000000,B00000000,
  B00000000,B01110000,B00000000,B10000000,B00000110,B00000000,B00000000,
  B00000001,B11100000,B00000001,B10000000,B00000011,B00000000,B00000000,
  B00000011,B00000000,B00000001,B00000000,B00000001,B00000000,B00000000,
  B00000110,B00000000,B00000011,B00000000,B00000001,B11110000,B00000000,
  B00000100,B00000000,B00000010,B00000000,B00000000,B10111000,B00000000,
  B00001100,B00000000,B01111110,B00000000,B00000000,B00001100,B00000000,
  B00001000,B00000000,B11100110,B00000000,B00000000,B00000100,B00000000,
  B00001000,B00000001,B10000000,B00000000,B00000000,B00000010,B00000000,
  B00001000,B00000011,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00000100,B00000010,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00001100,B00000100,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00011000,B00000100,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00010000,B00011100,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00010000,B01111100,B00000000,B00000000,B00000000,B00000010,B00000000,
  B00110000,B11000000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00110001,B10000000,B00000000,B00000000,B00000000,B00000001,B00000000,
  B00110001,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,
  B00010011,B00000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00010010,B00000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00011010,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,
  B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,
  B00000110,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,
  B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B10000000,
  B00000001,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,
  B00000001,B10000000,B00000000,B00000000,B00000000,B00000001,B00000000,
  B00000000,B11000000,B00000000,B00000000,B00000000,B00000011,B00000000,
  B00000000,B01111111,B11111111,B11111111,B11111111,B11111110,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11111000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};


const unsigned char weather1[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00011111,B11000000,B00000000,
  B00000000,B00000000,B01100000,B01100000,B00000000,
  B00000000,B00000000,B10000000,B00010000,B00000000,
  B00000000,B00000001,B00000000,B00001000,B00000000,
  B00000000,B00000011,B00000000,B00000111,B00000000,
  B00000000,B00000010,B00000000,B00000000,B11000000,
  B00000000,B01111110,B00000000,B00000000,B01100000,
  B00000000,B10000000,B00000000,B00000000,B00110000,
  B00000001,B00000000,B00000000,B00000000,B00010000,
  B00000011,B00000000,B00000000,B00000000,B00010000,
  B00000110,B00000000,B00000000,B00000000,B00010000,
  B00011100,B00000000,B00000000,B00000000,B00010000,
  B00100000,B00000000,B00000000,B00000000,B00011000,
  B01000000,B00000000,B00000000,B00000000,B00001000,
  B01000000,B00000000,B00000000,B00000000,B00000100,
  B11000000,B00000000,B00000000,B00000000,B00000100,
  B01000000,B00000000,B00000000,B00000000,B00000100,
  B01000000,B00000000,B00000000,B00000000,B00001100,
  B01000000,B00000000,B00000000,B00000000,B00001000,
  B00100000,B00000000,B00000000,B00000000,B00010000,
  B00011111,B11111111,B11111111,B11111111,B11100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000
};