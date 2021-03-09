int C[]={13,12,11}; 
int R[]={A1,A2,A3,A4}; 
char keymap[4][3]={ 
{'1','2','3'}, 
 {'4','5','6'}, 
 {'7','8','9'}, 
 {'*','0','#'} 
}; 
char key; 
void setup(){ 
for (int i=0; i<3; i++){ 
pinMode(C[i],INPUT); 
 } 
 for (int i=0; i<4; 
i++){ 
pinMode(R[i],OUTPUT); 
 } 
 Serial.begin(9600); 
} 
void loop(){ 
scankeypad(); 
Serial.println(key); 
void segment(int angka){ 
if (angka==0){ 
digitalWrite(a,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,HIGH); 
digitalWrite(e,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,LOW); 
 } 
 else if (angka==1){ 
digitalWrite(a,LOW); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,LOW); 
digitalWrite(e,LOW); 
digitalWrite(f,LOW); 
digitalWrite(g,LOW); 
 } 
 else if (angka==2){ 
digitalWrite(a,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(c,LOW); 
digitalWrite(d,HIGH); 
digitalWrite(e,HIGH); 
digitalWrite(f,LOW); 
digitalWrite(g,HIGH); 
 }
  else if (angka==3){ 
digitalWrite(a,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,HIGH); 
digitalWrite(e,LOW); 
digitalWrite(f,LOW); 
digitalWrite(g,HIGH); 
 }
  else if (angka==4){ 
digitalWrite(a,LOW); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,LOW); 
digitalWrite(e,LOW); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH); 
 }
  else if (angka==5){ 
digitalWrite(a,HIGH); 
digitalWrite(b,LOW); 
digitalWrite(c,HIGH); 
digitalWrite(d,HIGH); 
digitalWrite(e,LOW); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH); 
 }
  else if (angka==6){ 
digitalWrite(a,HIGH); 
digitalWrite(b,LOW); 
digitalWrite(c,HIGH); 
digitalWrite(d,HIGH); 
digitalWrite(e,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH); 
 }
  else if (angka==7){ 
digitalWrite(a,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,LOW); 
digitalWrite(e,LOW); 
digitalWrite(f,LOW); 
digitalWrite(g,LOW); 
 }
  else if (angka==8){ 
digitalWrite(a,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,HIGH); 
digitalWrite(e,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH); 
 }
  else{ 
digitalWrite(a,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(d,HIGH); 
digitalWrite(e,LOW); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH); 
 } 



void scankeypad(){ 
for(int i=0; i<4; i++){ 
digitalWrite(R[i],LOW); 
for(int j=0; j<3; j++){ 
if(digitalRead(C[j])==LO
W){ 
key=keymap[i][j]; 
delay(500); 
 } } 
 
digitalWrite(R[i],HIGH); 
 } 
