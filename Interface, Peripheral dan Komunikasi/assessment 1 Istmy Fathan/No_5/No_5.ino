int l1=10;
int l2=9;
int l3=8;//C:\\Users\\USER\\AppData\\Local\\Temp\\arduino_build_997146/No_5.ino.hex
int l4=7;
int l5=6;
int l6=5;
int but1=11;
int but2=12;
int nilai;
int tombol;
 
void setup() 
{
pinMode(l1, OUTPUT);
pinMode(l2, OUTPUT);
pinMode(l3, OUTPUT);
pinMode(l4, OUTPUT);
pinMode(l5, OUTPUT);
pinMode(l6,OUTPUT);
pinMode(but1,INPUT);
pinMode(but2,INPUT);
}
 
void loop()
{
  if(digitalRead(but1) == LOW){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    delay(500);
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    delay(500);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    delay(500);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(l5, LOW);
    digitalWrite(l6, LOW);
    delay(500);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, HIGH);
    digitalWrite(l6, LOW);
    delay(500);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l5, LOW);
    digitalWrite(l6, HIGH);
    delay(500);

}
else if (digitalRead(but2) == LOW){
digitalWrite(l1, LOW);
digitalWrite(l2, LOW);
digitalWrite(l3, LOW);
digitalWrite(l4, LOW);
digitalWrite(l5, LOW);
digitalWrite(l6, HIGH);
delay(500);
digitalWrite(l1, LOW);
digitalWrite(l2, LOW);
digitalWrite(l3, LOW);
digitalWrite(l4, LOW);
digitalWrite(l5, HIGH);
digitalWrite(l6, LOW);
delay(500);
digitalWrite(l1, LOW);
digitalWrite(l2, LOW);
digitalWrite(l3, LOW);
digitalWrite(l4, HIGH);
digitalWrite(l5, LOW);
digitalWrite(l6, LOW);
delay(500);
digitalWrite(l1, LOW);
digitalWrite(l2, LOW);
digitalWrite(l3, HIGH);
digitalWrite(l4, LOW);
digitalWrite(l5, LOW);
digitalWrite(l6, LOW);
delay(500);
digitalWrite(l1, LOW);
digitalWrite(l2, HIGH);
digitalWrite(l3, LOW);
digitalWrite(l4, LOW);
digitalWrite(l5, LOW);
digitalWrite(l6, LOW);
delay(500);
digitalWrite(l1, HIGH);
digitalWrite(l2, LOW);
digitalWrite(l3, LOW);
digitalWrite(l4, LOW);
digitalWrite(l5, LOW);
digitalWrite(l6, LOW);
delay(500);
}
}
