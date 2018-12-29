/*
 * Interfacing:
 * https://www.youtube.com/watch?v=3Xc2sPhwWEc
 *      
 *    PINOUT: 
 *        _____________________________
 *       |  ARDUINO UNO >>>   LM35DZ  |
 *        -----------------------------
 *        GND      >>>   GND(right pin of flat side infront you)
 *        5v       >>>   VCC(left pin of flat side infront you)    
 *        A0       >>>   OUTPUT(middle)
 *
 *        Created on: Dec 30, 2018
 *        Author: Md. Rashadul Alam
 *        Email: rashed.droid@gmail.com
 */

#include <SoftwareSerial.h>

void setup() {
   Serial.begin(9600);
}

void loop() {
  float temp = analogRead(A0);
  temp = temp * 0.48828125; 
  Serial.print("TEMPERATURE: ");
  Serial.print(temp);
  Serial.print(" *C");
  Serial.println();
  delay(1000);
}
