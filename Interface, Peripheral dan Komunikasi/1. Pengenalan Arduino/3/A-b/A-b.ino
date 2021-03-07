int led=11; // jika diganti jadi A maka led=A bukan port 11 utuk output
int pot=A0; // jika diganti jadi B maka pot=B bukan port A0 untuk analog input
int data;
void setup(){
  
pinMode(led,OUTPUT);
pinMode(pot,INPUT); // menjelaskan bawa pin A0=pot itu input analog
  
} void loop(){
  
data=analogRead(pot);
data=data/4;   // nilai dari pot dibagi 4
analogWrite(led,data);
  
}
