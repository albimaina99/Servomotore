
#include <Servo.h>

Servo Servol;

void setup() {
  Servol.attach (9);
    Servol.write (180);

}

void loop() {
  Servol.write (180);
  delay (500);
  Servol.write (150);
  delay (500);
  Servol.write (120);
  delay (500);  
  Servol.write (100);
  delay (500);
  Servol.write (80);
  delay (500);
  Servol.write (60);
  delay (500);
  Servol.write (40);
  delay (500);
  Servol.write (20);
  delay (500);
  Servol.write (0);
  delay (500);
  }


