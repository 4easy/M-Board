/*
  M-Board Bluetooth AT Set
 
 The circuit:
 * Bluetooth TXD pin to digital pin 0
 * Bluetooth RXD pin to digital pin 1
 
 Library originally added 12 August 2014
 by Blue
 
 This example code is in the public domain.
 
 http://easy.cc
 */
 
void setup() { 
 //Initialize serial and wait for port to open:
  Serial1.begin(9600); 
  while (!Serial1) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  
  // prints title with ending line break 
  Serial1.write("AT+NAMEM-Board Rev.A-BL2.0"); //  BL2.0
  //Serial1.write("AT+NAME=M-Board Rev.A-BL2.0"); //  BL4.0
} 



void loop() { 

} 
