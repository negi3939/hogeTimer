const int ASW = 13;
const int LSW  = 7;

void setup() {
  pinMode(ASW,OUTPUT);
  pinMode(LSW,INPUT);
  digitalWrite(ASW,LOW);
}

int ii;

void loop() {
  while(digitalRead(LSW)==LOW){}
  while(digitalRead(LSW)==HIGH){
    delay(90000UL);
    digitalWrite(ASW,HIGH);
    delay(1000);
    digitalWrite(ASW,LOW);
    delay(1000);
    while(digitalRead(LSW)==HIGH){}
    delay(3000UL);
    digitalWrite(ASW,HIGH);
    delay(1000);
    digitalWrite(ASW,LOW);
    delay(1000);
   }
}
