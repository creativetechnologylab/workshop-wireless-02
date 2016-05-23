/*
 *  SerialRead - Reading serial data and setting digital pin to high/low
 *
 *  @author Gareth Foote
 */

const int ledPin = 9;
 
void setup() {
  Serial.begin(9600);
  // Sets timeout to 10 milliseconds, instead of default 1 second
  Serial.setTimeout(10);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Check if serial port is being sent data
  if(Serial.available() > 0){
    // Convert to an integer (int)
    char input = Serial.parseInt();
    digitalWrite(ledPin, input);
  }
}
