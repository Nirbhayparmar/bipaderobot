#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
void setup() {
  myservo1.attach(D1);
  myservo2.attach(D2);
  myservo3.attach(D3);
  myservo4.attach(D4);
 
}

void loop() {
  delay(200);
  /////////////////
  myservo2.detach();
  myservo1.detach();
  myservo4.detach();
  myservo3.attach(D3);
  int pos2;
  for (pos2 = 90; pos2 <= 110; pos2++) { 
    myservo3.write(pos2);             
    delay(10);}
  
  myservo3.detach();
  myservo2.attach(D2);
  int pos1;
  for (pos1 = 100; pos1 >= 80; pos1--) { 
    myservo2.write(pos1);             
    delay(10);}
  
  myservo2.detach();
  myservo3.attach(D3);
  
  for (pos2 = 110; pos2 >= 90; pos2--) { 
    myservo3.write(pos2);             
    delay(10);}

  myservo3.detach();
  myservo2.attach(D2);
  
  for (pos1 = 80; pos1 <= 100; pos1++) { 
    myservo2.write(pos1);             
    delay(10);}

  myservo2.detach();

  delay(200);
  //////////////////////////
  myservo1.detach();
  myservo2.detach();
  myservo3.detach();
  myservo4.attach(D4);
  int pos3;
  for (pos3 = 90; pos3 <= 110; pos3++) { 
    myservo4.write(pos3);             
    delay(10);}
  
  myservo4.detach();
  myservo1.attach(D1);
  int pos4;
  for (pos4 = 100; pos4 >= 80 ; pos4--) { 
    myservo1.write(pos4);             
    delay(10);}
  
  myservo1.detach();
  myservo4.attach(D4);
  
  for (pos3 = 110; pos3 >= 90; pos3--) { 
    myservo4.write(pos3);             
    delay(10);}

  myservo4.detach();
  myservo1.attach(D1);
  
  for (pos4 = 70; pos4 <= 90; pos4++) { 
    myservo1.write(pos4);             
    delay(10);}

  myservo1.detach();
  myservo2.detach();
  myservo3.detach();
  myservo4.detach();
  
}
