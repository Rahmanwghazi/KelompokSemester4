int led=11; //led memiliki fungsi sebagai 11 atau led sama dengan 11
int tombol=2; // tombol memiliki fungsi di port 2 atau tombol sama degan port 2
void setup(){
pinMode(led,OUTPUT);
pinMode(tombol,INPUT);
}
void loop(){
 if(digitalRead(tombol)==LOW){ // jika tombol = low maka led akan menyala / 1
digitalWrite(led,HIGH);
 }
else{
 digitalWrite(led,LOW);
 }
} 
