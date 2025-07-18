#include <Servo.h>


Servo hipLeft, kneeLeft, hipRight, kneeRight;

void setup() {

  hipLeft.attach(8);
  kneeLeft.attach(9);
  hipRight.attach(10);
  kneeRight.attach(11);
  

  standStill();
  delay(1000);
}

void loop() {
  walkStep();   
  delay(200); 
}


void standStill() {
  hipLeft.write(90);
  kneeLeft.write(90);
  hipRight.write(90);
  kneeRight.write(90);
}


void walkStep() {

  kneeRight.write(100);  
  hipLeft.write(120);     
  kneeLeft.write(60);     
  delay(200);


  hipLeft.write(100);     
  kneeLeft.write(90);     
  delay(200);


  hipLeft.write(90);
  kneeLeft.write(90);
  delay(200);


  kneeLeft.write(100);
  hipRight.write(120);
  kneeRight.write(60);
  delay(500);

  hipRight.write(100);
  kneeRight.write(90);
  delay(500);

  hipRight.write(90);
  kneeRight.write(90);
  delay(500);
}
