#include "Arduino.h"

//==================================
//SETUP    SETUP     SETUP     SETUP
//==================================
void setup()
{
	Serial.begin(9600);
	analogReference(EXTERNAL);
	Serial.println("Reading from AREF EXTERNAL");
}

//==============================
// LOOP    LOOP    LOOP     LOOP
//==============================
void loop()
{
	auto voltsIn = (unsigned) analogRead(A0);
	Serial.println(voltsIn);
	delay(500);
}
