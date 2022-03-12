#define inputPin 16

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
}

void loop() {
  int IOstate ;
  IOstate = digitalRead(inputPin);
  Serial.println(IOstate);
  delay(200); // delay 200ms for next GPIO read
}
