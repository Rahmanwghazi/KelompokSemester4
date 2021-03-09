int an1=11;//kiri 50
int an2=A0;//kiri 50
int an3=A1;//tgh 60%
int an4=A2;//tgh 60
int an5=A3;
int an6=A4;
int an7=A5;
int an8=3;

int in1=10;
int in2=9;
int in3=6;
int in4=5;

void setup() {
  // put your setup code here, to run once:
pinMode(an1, INPUT);
pinMode(an2, INPUT);
pinMode(an3, INPUT);
pinMode(an4, INPUT);
pinMode(an5, INPUT);
pinMode(an6, INPUT);
pinMode(an7, INPUT);
pinMode(an8, INPUT);

pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead (an1)==HIGH && digitalRead(an2)==HIGH){
 // BELOK KIRI OY
 digitalWrite (in1,HIGH);
 digitalWrite (in3, LOW);
 analogWrite  (in1,127);
 analogWrite  (in3, 0);

}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}

if(digitalRead (an2)==HIGH && digitalRead(an3)==HIGH){
   // TENGAHH
 digitalWrite (in1,HIGH);
 digitalWrite (in3,HIGH);
 analogWrite  (in3, 127);
 analogWrite  (in1, 51);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}

if(digitalRead (an3)==HIGH && digitalRead(an4)==HIGH){
  // BELOK KANAN
 digitalWrite (in3,HIGH);
 digitalWrite (in1, HIGH);
 analogWrite  (in3, 127);
 analogWrite  (in1, 102);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}

if(digitalRead (an4)==HIGH && digitalRead(an5)==HIGH){
   // TENGAHH
 digitalWrite (in1,HIGH);
 digitalWrite (in3,HIGH);
 analogWrite  (in1, 153);
 analogWrite  (in3, 153);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}
if(digitalRead (an5)==HIGH && digitalRead(an6)==HIGH){
   // TENGAHH
 digitalWrite (in1,HIGH);
 digitalWrite (in3,HIGH);
 analogWrite  (in1, 127);
 analogWrite  (in3, 102);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}
if(digitalRead (an6)==HIGH && digitalRead(an7)==HIGH){
   // TENGAHH
 digitalWrite (in1,HIGH);
 digitalWrite (in3,HIGH);
 analogWrite  (in1, 127);
 analogWrite  (in3, 51);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}
if(digitalRead (an7)==HIGH && digitalRead(an8)==HIGH){
   // TENGAHH
 digitalWrite (in1,HIGH);
 digitalWrite (in3,HIGH);
 analogWrite  (in1, 127);
 analogWrite  (in3, 0);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}
}
