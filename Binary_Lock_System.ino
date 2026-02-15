#include <Servo.h>
int ledPin = 10;

int switch1Pin1 = 2;
int switch1Pin2 = 3;

int switch2Pin1 = 4;
int switch2Pin2 = 5;

int switch3Pin1 = 6;
int switch3Pin2 = 7;

#define pinServo  8
Servo servop;



void setup()
{
    servop.attach(pinServo);
  
  pinMode(ledPin, OUTPUT);
  pinMode(switch1Pin1, INPUT);
  pinMode(switch1Pin2, INPUT);
  
  pinMode(switch2Pin1, INPUT);
  pinMode(switch2Pin2, INPUT);
  
  pinMode(switch3Pin1, INPUT);
  pinMode(switch3Pin2, INPUT);

  
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(switch1Pin1) && digitalRead(switch2Pin2) && digitalRead(switch3Pin2)){
    digitalWrite(ledPin, HIGH);
         servop.write(90);

  } 
  else{
    digitalWrite(ledPin, LOW);
             servop.write(0);

  }
   
}