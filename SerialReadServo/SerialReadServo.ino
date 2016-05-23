/*
 *  SerialReadServo - Reading serial data and setting servo position
 *
 *  @author Gareth Foote
 */
 
 #include <Servo.h>
 
const int servoPin = 9;
Servo myservo;  // create servo object to control a servo

void setup() {
  Serial.begin(9600);
  // Sets timeout to 10 milliseconds, instead of default 1 second
  Serial.setTimeout(10);
  myservo.attach(servoPin);
}

void loop() {
  // Check if serial port is being sent data
  if(Serial.available() > 0){
    // Convert to an integer (int)
    char input = Serial.parseInt();
    myservo.write(input);
    delay(15);
  }
}
