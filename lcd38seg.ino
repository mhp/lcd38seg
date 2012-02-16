/*
  lcd38seg
  
  Simple example of how to drive a 38-segment display
  found in the Nottingham Hackspace.
 
 */

int clkPin = 8;
int dataPin = 9;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(clkPin, OUTPUT);
  digitalWrite(clkPin, LOW);
  pinMode(dataPin, OUTPUT);
  digitalWrite(dataPin, LOW);
  
}

void loop() {
  
  shiftOut(dataPin, clkPin, MSBFIRST, 0x3B);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x4D);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xF1);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xFF);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xEE);

  shiftOut(dataPin, clkPin, MSBFIRST, 0x5B);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x03);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x49);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x4F);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x6C);

  shiftOut(dataPin, clkPin, MSBFIRST, 0x3B);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x7F);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x69);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x5F);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xEE);

  shiftOut(dataPin, clkPin, MSBFIRST, 0x3B);
  shiftOut(dataPin, clkPin, MSBFIRST, 0x7F);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xE1);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xDF);
  shiftOut(dataPin, clkPin, MSBFIRST, 0xEE);

  delay(10000);
}
