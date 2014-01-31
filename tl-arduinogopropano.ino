/*
ArduinoGoProPano Timelapse file.
MAKE SURE YOUR GOPRO HAS AUTOEXEC:ASH IN THE ROOT LEVEL OF THE SD!!!
*/


#include <Servo.h> 
 
Servo myservo;  
                
 
int pos = 0;    
 
void setup() 
{ 
  myservo.attach(9);   
} 
 
 

{
  for(pos = 0; pos < 45; pos += 1)  
  {                                 
    myservo.write(pos);              
    delay(15);                      
  } 
{
  delay(5000)
}
{
for(pos = 45; pos < 90; pos += 1)  
  {                                  
    myservo.write(pos);           
    delay(15);                       
  } 
{
  delay(5000)
}
{
for(pos = 90; pos < 135; pos += 1)  
  {                                
    myservo.write(pos);       
    delay(15);                       
  } 
{
  delay(5000)
}
{
for(pos = 135; pos < 180; pos += 1)  
  {                                 
    myservo.write(pos);           
    delay(15);                       
  } 
{
  delay(5000)
}
{
for(pos = 180; pos < 225; pos += 1) 
  {                             
    myservo.write(pos);             
    delay(15);                
  } 
{
  delay(5000)
}
{
for(pos = 225; pos < 270; pos += 1) 
  {                   
    myservo.write(pos);        
    delay(15);                  
  } 
}
