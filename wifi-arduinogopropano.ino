
/*
ArduinoGoProPano WiFi file. By Konrad Iturbe and Harald Meyer.
REPLACE PASSWORD BY THE CAMERA WIFI PASSWORD!
 */

#include <Bridge.h>
#include <HttpClient.h>
#include <Servo.h> 


#define TIMELAPSE_INTERVAL_SECONDS 5
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 

unsigned long _lastLoopTime;
unsigned long _timlapseInterval;

void setup() {
  // Bridge takes about 30-60 seconds to start up
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  Bridge.begin();
  digitalWrite(13, HIGH);

  Serial.begin(9600);

  while (!Serial); // wait for a serial connection
  
  Serial.println("Serial port connected.");
  
  _lastLoopTime = 0;
  _timlapseInterval = TIMELAPSE_INTERVAL_SECONDS * 1000L;
}

 {
  unsigned long curTime = millis();
  
  // Note: the code does not take the processing time into account, 
  //       thus the actual capturing interval slightly deviates from the defined one!
  if (curTime - _lastLoopTime >= _timlapseInterval) 
  {
    
    Serial.println("Capturing image.");
  
    // Initialize the client library
    HttpClient client;
  { 
  for(pos = 0; pos < 45; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
    // Make a HTTP request:
    client.get("http://10.5.5.9/bacpac/SH?t=password&p=%01");
    
    _lastLoopTime = millis();
  }
  
}
{
  delay(4000)
}
    HttpClient client;
  { 
  for(pos = 45; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
    // Make a HTTP request:
    client.get("http://10.5.5.9/bacpac/SH?t=password&p=%01");
    
    _lastLoopTime = millis();
  }
  
}
{
  delay(4000)
}
    HttpClient client;
  { 
  for(pos = 90; pos < 135; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
    // Make a HTTP request:
    client.get("http://10.5.5.9/bacpac/SH?t=password&p=%01");
    
    _lastLoopTime = millis();
  }
  
}
{
  delay(4000)
}
    HttpClient client;
  { 
  for(pos = 135; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
    // Make a HTTP request:
    client.get("http://10.5.5.9/bacpac/SH?t=password&p=%01");
    
    _lastLoopTime = millis();
  }
  
}
{
  delay(4000)
}
    HttpClient client;
  { 
  for(pos = 180; pos < 225; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
    // Make a HTTP request:
    client.get("http://10.5.5.9/bacpac/SH?t=password&p=%01");
    
    _lastLoopTime = millis();
  }
  
}
{
  delay(4000)
}
    HttpClient client;
  { 
  for(pos = 225; pos < 270; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
    // Make a HTTP request:
    client.get("http://10.5.5.9/bacpac/SH?t=password&p=%01");
    
    _lastLoopTime = millis();
  }
  
}
