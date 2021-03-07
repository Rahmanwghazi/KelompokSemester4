int an1=A0;
int an2=A1;
int an3=A2;
int an4=A3;
int an5=A4;
int an6=A5;

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

pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead (an1)==HIGH || (an2)==HIGH){
{ // KIRI OY
 digitalWrite (in1,HIGH);
}
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}

if(digitalRead (an3)==HIGH || (an4)==HIGH){
   // TENGAHH
 digitalWrite (in1,HIGH);
 digitalWrite (in3,HIGH);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}

if(digitalRead (an5)==HIGH || (an6)==HIGH){
  // KANAN
 digitalWrite (in3,HIGH);
}

else {
  digitalWrite (in1,LOW);
  digitalWrite (in3,LOW);
}
}
