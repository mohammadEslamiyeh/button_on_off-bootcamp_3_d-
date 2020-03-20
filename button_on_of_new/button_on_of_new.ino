#define BUTTON 4
#define  LED 5
int switchstate = 0;
int oldswitchstate = 0;
int lighton = 0;


void setup() {
  // put your setup code here, to run once:
 pinMode (BUTTON,INPUT);
  pinMode(LED,OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
switchstate = digitalRead(BUTTON);
if (switchstate != oldswitchstate){
  oldswitchstate = switchstate;
if (switchstate == HIGH){
  lighton = !lighton;
}
}
if (lighton){
 digitalWrite(LED,HIGH);
}else{
   digitalWrite(LED,LOW);
}
}
