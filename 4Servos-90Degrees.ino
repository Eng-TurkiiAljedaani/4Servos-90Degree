

#include <Servo.h>

int pos = 0;

Servo servo_8;
Servo servo_9;
Servo servo_10;
Servo servo_11;


void setup()
{
  servo_8.attach(8, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);



}

void loop()
{

  
  for (pos = 0; pos <= 180; pos += 1) {

    servo_8.write(pos);
    servo_9.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);

    delay(2); 

  }
  for (pos = 180; pos >= 0; pos -= 1) {

    servo_8.write(pos);
    servo_9.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);


    delay(2); 
    
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
