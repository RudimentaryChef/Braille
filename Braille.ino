// C++ code
//
/*
 
  Braille Printer Code
 
*/

#include <Servo.h>
int pos = 0;
int angle = 45;

Servo servo_3;
Servo servo_5;
Servo servo_6;
Servo servo_9;
Servo servo_10;
Servo servo_11;

void setup()
{

  Serial.begin(9600);
 
  servo_3.attach(3,544,2400);
  servo_5.attach(5,544,2400);
  servo_6.attach(6,544,2400);
  servo_9.attach(9,544,2400);  
  servo_10.attach(10,544,2400);
  servo_11.attach(11,544,2400);
 
}

void loop()
{
  String dots = " ";
  char dot;
 
  while(Serial.available()) {
     dot = Serial.read();
     dots.concat(dot);
  }
 
  if(dots.indexOf("1") != -1)
  {
    for (pos = angle; pos >= 0; pos -= 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_3.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }

    for (pos = 0; pos <= angle; pos += 1)
    {  
      // tell servo to go to position in variable 'pos'
      servo_3.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
      Serial.println(pos);
    }
  }
 
  if(dots.indexOf("2") != -1)
  {
    for (pos = 0; pos <= angle; pos += 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_5.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }
    for (pos = angle; pos >= 0; pos -= 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_5.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }
  }
 
  if(dots.indexOf("3") != -1)
  {
    for (pos = 0; pos <= angle; pos += 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_6.write(pos);
 
      delay(2);  //Wait for 2 millisecond(s)
    }
    for (pos = angle; pos >= 0; pos -= 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_6.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }
  }
 
  if(dots.indexOf("4") != -1)
  {
    for (pos = 0; pos <= angle; pos += 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_9.write(pos);
 
      delay(2);  //Wait for 2 millisecond(s)
    }
    for (pos = angle; pos >= 0; pos -= 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_9.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }
  }
 
  if(dots.indexOf("5") != -1)
  {
    for (pos = 0; pos <= angle; pos += 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_10.write(pos);
 
      delay(2);  //Wait for 2 millisecond(s)
    }
    for (pos = angle; pos >= 0; pos -= 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_10.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }
  }
 
  if(dots.indexOf("6") != -1)
  {
    for (pos = 0; pos <= angle; pos += 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_11.write(pos);
 
      delay(2);  //Wait for 2 millisecond(s)
    }
    for (pos = angle; pos >= 0; pos -= 1)
    {
      // tell servo to go to position in variable 'pos'
      servo_11.write(pos);
      // wait 15 ms for servo to reach the position
      delay(2); // Wait for 2 millisecond(s)
    }
  }
}