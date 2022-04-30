#include <Servo.h> 
Servo myServo;

# define flexPin A0 

void setup() 
{ 
  myServo.attach(3);
  Serial.begin(9600);

} 

void loop() 
{ 
  int flexValue;
  int servoPosition;
  
  flexValue = analogRead(flexPin);
  
  servoPosition = map(flexValue, 770, 950, 0, 180);
  servoPosition = constrain(servoPosition, 0, 180);

  myServo.write(servoPosition);
  
  Serial.print("sensor =");
  Serial.println(flexValue);
  Serial.print("servo =");
  Serial.println(servoPosition);
  
  delay(20);
}