void setup() {
  // put your setup code here, to run once:
  pinMode(0, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightLevel = analogRead(A0);
  if (lightLevel < 100) {
    digitalWrite(5, HIGH);
  }else{
    digitalWrite(5, LOW);
  }
  Serial.println(lightLevel);

  delay(500);
  
}
