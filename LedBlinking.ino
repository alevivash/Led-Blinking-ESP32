//Alejandro Vivas

//Declare variable

int ledPin = 25;

void setup() {
  // Activate the led
  pinMode(ledPin,OUTPUT);

}

void loop() {

  //Turn on Led
  digitalWrite(ledPin, HIGH);

  //Wait 1 second
  delay(1000);

  //Turn off Led
  digitalWrite(ledPin, LOW);

  //Wait 1 second
  delay(1000);
}
