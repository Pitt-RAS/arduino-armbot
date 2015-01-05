// Sweep
// by BARRAGAN <http://barraganstudio.com>
// This example code is in the public domain.


#include <Servo.h>
 
Servo myservo;  // create servo object to control a servo
                // a maximum of eight servo objects can be created
Servo myservo2;
 
int pos = 0;    // variable to store the servo position
int pos2 = 0;

int potPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor
int potPin2 = A1;
int val2 = 0;

void setup() {
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
  myservo.attach(9);
  Serial.begin(9600);
  myservo2.attach(10);
  Serial.begin(9600); 
  val = analogRead(potPin);
  val2 = analogRead(potPin2);
}

void loop() {
  val = analogRead(potPin);
  Serial.print("Input1 ");
  Serial.print(val);
  Serial.print("\n");// read the value from the sensor
  val=map(val,0,1023,0,179);
  Serial.print("Output1 ");
  Serial.print(val);
  Serial.print("\n");
  myservo.write(val);
  //delay(20);
  
  val2 = analogRead(potPin2);
  Serial.print("Input2 ");
  Serial.print(val2);
  Serial.print("\n");// read the value from the sensor
  val2=map(val2,0,1023,0,179);
  Serial.print("Output2 ");
  Serial.print(val2);
  Serial.print("\n");
  myservo2.write(val2);
  delay(20);

}
