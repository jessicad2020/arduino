
#define green 9
#define blue 10
#define red 11

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);

  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  delay(500);
  
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);

  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(500);
  
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  delay(500);
  
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  delay(500); 
}
