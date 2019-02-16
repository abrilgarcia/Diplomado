

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  //if (sensorValue>=500) //2V
  //if (sensorValue>=750) //3V
  if (sensorValue>=1000) //4V
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
  }

  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }

}
  
