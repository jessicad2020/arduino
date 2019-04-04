#define b 9
#define g 10
#define r 11

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(r, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  delay(1);
  if (light < 100){
    digitalWrite(b, HIGH);
  }else{
    digitalWrite(b, LOW);
  
  }
  
  if (light < 300){
    digitalWrite(r, HIGH);
  }else{
    digitalWrite(r, LOW);
  }
  
  if (light < 200){
    digitalWrite(g, HIGH);
  }else{
    digitalWrite(g, LOW);
  }
  
  Serial.println(light);
}
