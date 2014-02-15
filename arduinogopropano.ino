// Arduino GoPro Pano by Konrad Iturbe (GitHub @konradit) www.chernowii.com
// Wiring:
// LED to pin 13
// Servo to pin 9

#include <Servo.h> 
int led = 13; 
Servo myservo;  // create servo object to control a servo 
                 
 
void setup() 
{ 
  myservo.attach(9); 
pinMode(led, OUTPUT);
myservo.write(0); // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
  digitalWrite(led, HIGH);                           
    myservo.write(45);
    
    delay(2500);          
digitalWrite(led, LOW);
delay(15);// waits 15ms for the servo to reach the position                             
    digitalWrite(led, HIGH);
    myservo.write(90);              
       
    delay(2500);          
digitalWrite(led, LOW);
delay(15);// waits 15ms for the servo to reach the position 
  digitalWrite(led, HIGH);
  myservo.write(135);            
      
    delay(2500);          
digitalWrite(led, LOW);
delay(15);
  digitalWrite(led, HIGH); 
    myservo.write(180);              
     
    delay(3500);          
digitalWrite(led, LOW);
delay(15);
} 
