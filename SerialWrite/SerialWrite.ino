/*
 *  SerialWrite - Writing data from analog input to serial port.
 *  
 *  @author Gareth Foote
 */

int buttonPin = 2;

void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){

  if(digitalRead(buttonPin) == LOW){
    Serial.println("btn");
  } else {
    // Read the input on analog pin 0.
    int sensorValue = analogRead(A0);
    // Write value of sensor to serial.
    Serial.println(sensorValue);
  }
  // Delay in between reads for stability
  delay(250); 
}

