#include <Servo.h>
Servo myservo;

int origin = 90;

void setup(){
  myservo.attach(9);
  myservo.write(origin);// move servos to center position -> 90°

} 
void loop(){

  myservo.write(90);// move servos to center position -> 90°
  delay(100);
  myservo.write(30);// move servos to center position -> 60°
  delay(100);
  myservo.write(90);// move servos to center position -> 90°
  delay(100);
  myservo.write(150);// move servos to center position -> 120°
  delay(100);
}
