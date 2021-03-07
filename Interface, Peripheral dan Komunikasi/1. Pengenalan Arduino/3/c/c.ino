int led=11; // jika diganti jadi A maka led=A bukan port 11 utuk output
int pot=A0; // jika diganti jadi B maka pot=B bukan port A0 untuk analog input
int data;
int ea=10;
int yes=9;
void setup(){
pinMode(ea,OUTPUT);
  pinMode(yes,OUTPUT);
   pinMode(led,OUTPUT);
pinMode(pot,INPUT); // menjelaskan bawa pin A0=pot itu input analog
  
} void loop(){
  
data=analogRead(pot);
data=data/4;   // nilai dari pot dibagi 4
analogWrite(led,data);
  delay(100);
  data=analogRead(pot);
data=data/4;   // nilai dari pot dibagi 4
analogWrite(ea,data);
  delay(200);
    data=analogRead(pot);
data=data/4;   // nilai dari pot dibagi 4
analogWrite(yes,data);
  delay(300);
}
