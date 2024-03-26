/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/kevro/EE1301/BigP/src/BigP.ino"
void setup();
void loop();
#line 1 "c:/Users/kevro/EE1301/BigP/src/BigP.ino"
int data;

void setup() {

   // Open the serial port for communication with the computer
  Serial.begin(9600);

  // Setup D7 pin to output a heartbeat
  pinMode(D7, OUTPUT);
}

void loop() {

  // Heartbeat, show we're alive
  // digitalWrite(D7, HIGH);
  // delay(250);

  // Read data from analog pins (returns a number from 0 to 4095)
  data = analogRead(A0);

  // Print the data to the serial port
  Serial.print("My Infrared Laser Reads: ");
  Serial.print(data);
  Serial.println(";");

  // Heartbeat, show we're alive
  // digitalWrite(D7, LOW);
  // delay(250);

}