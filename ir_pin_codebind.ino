int irPin = 12;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int inputPin = digitalRead(irPin);

  if(inputPin == HIGH){
    Serial.println("Object detected");

  }
  else{
    Serial.println("Object not detected!");
  }
  delay(5000);
}
