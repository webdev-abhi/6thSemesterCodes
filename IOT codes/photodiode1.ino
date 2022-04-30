int ledPin = 13;
int buttonApin = 2;
    
     
byte leds = 0;
     
void setup() 
{
	pinMode(ledPin, OUTPUT);
	pinMode(buttonApin, INPUT_PULLUP);    
}

void loop() 
{
	if (digitalRead(buttonApin) == LOW)
	{
		digitalWrite(ledPin, HIGH);
	}
	else
	{
		digitalWrite(ledPin, LOW);
	}
}
