#define BUTTON 4
int ledpin= 5;
int sw = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode (ledpin,OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sw = digitalRead(BUTTON);
if (sw == 1){
  digitalWrite(ledpin,HIGH);
  delay(100);
}
if (sw == 0){
  digitalWrite(ledpin,HIGH);
  delay(100);
}
}
