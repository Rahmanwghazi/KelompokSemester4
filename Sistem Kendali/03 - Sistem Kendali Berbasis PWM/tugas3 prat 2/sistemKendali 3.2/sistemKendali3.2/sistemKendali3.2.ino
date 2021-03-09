int an1=11;
int an2=A0;
int an3=A1;
int an4=A2;
int an5=A3;
int an6=A4;
int an7=A5;
int an8=3;

int in1=10;
int in2=9;
int in3=5;
int in4=6;

char buff[100];

String stringkondisi="00000000";
String lastkondisi="00000000";
int LastError=0;

int sensor[8],x, sensorBit, t, a_size;
char sendat[8];


void setup() {
  Serial.begin(9600);
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

String convertKeString(char* a, int size){
  int i;
  String s = "";
  for (i=0;i<size;i++){
    s=s+a[i];
  }
  return s;
}

void loop() {
  // put your main code here, to run repeatedly:

  sensor[0]=digitalRead(an1);
  sensor[1]=digitalRead(an2);
  sensor[2]=digitalRead(an3);
  sensor[3]=digitalRead(an4);
  sensor[4]=digitalRead(an5);
  sensor[5]=digitalRead(an6);
  sensor[6]=digitalRead(an7);
  sensor[7]=digitalRead(an8);
  
  delay(50);
  for (x=7;x>=0;x--){
    if(sensor[x] != 0 || sensor[x]== HIGH){
      sendat[x]='1';
    }
    else {
      sendat[x]='0';
    }
  }

  sensorBit=0;
  for (x=0;x<=7;x++){
    sensorBit += sendat[x] * (1 << x);
  }

  sprintf(buff, "%3d %3d %3d %3d %3d %3d %3d %3d ", sensor[0], sensor[1],sensor[2],sensor[3],sensor[4],sensor[5],sensor[6],sensor[7]);
  Serial.print(buff);
  sprintf(buff, "%c%c%c%c%c%c%c%c",sendat[0],sendat[1],sendat[2],sendat[3],sendat[4],sendat[5],sendat[6],sendat[7]);
  Serial.println(buff);

  int a_size = sizeof(sendat)/sizeof(char);
  String stringkondisi = convertKeString(sendat, a_size);
  
  digitalWrite (in1, HIGH);
  digitalWrite (in3, HIGH);
  if(stringkondisi=="10000000"){;

   analogWrite  (in1,127);
   analogWrite  (in3, 0);
   LastError = -6;
   lastkondisi=stringkondisi;
  }

  if(stringkondisi=="11000000"){
    
   analogWrite  (in1, 127);
   analogWrite  (in3, 12);
   LastError = -5;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="01000000"){
   analogWrite  (in1, 127);
   analogWrite  (in3, 25);
   LastError = -4;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="01100000"){
  
   analogWrite  (in1, 127);
   analogWrite  (in3, 38);
   LastError = -3;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="00100000"){
   
   analogWrite  (in1, 127);
   analogWrite  (in3, 51);
   LastError = -2;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="00110000"){
    
   analogWrite  (in1, 127);
   analogWrite  (in3, 63);
   LastError = -1;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="00010000"){
     
   analogWrite  (in1, 127);
   analogWrite  (in3, 76);
   LastError = 0;
   lastkondisi=stringkondisi;
  }
    if(stringkondisi=="00011000"){
     

   analogWrite  (in1, 153);
   analogWrite  (in3, 153);
   LastError = 0;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00001000"){
     
   analogWrite  (in1, 76);
   analogWrite  (in3, 127);
   LastError = 0;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00001100"){
     
  
   analogWrite  (in1, 63);
   analogWrite  (in3, 127);
   LastError = 1;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000100"){
     
  \
   analogWrite  (in1, 51);
   analogWrite  (in3, 127);
   LastError = 2;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000110"){
     
 
   analogWrite  (in1, 38);
   analogWrite  (in3, 127);
   LastError = 3;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000010"){
     
  
   analogWrite  (in1, 25);
   analogWrite  (in3, 127);
   LastError = 4;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000011"){
     

   analogWrite  (in1, 12);
   analogWrite  (in3, 127);
   LastError = 5;
   lastkondisi=stringkondisi;
  }

  if (stringkondisi=="00000001"){

    analogWrite  (in1, 0);
    analogWrite  (in3, 127);
    LastError = 6;
   lastkondisi=stringkondisi;
  }
  if (stringkondisi=="00000000"){
    Serial.println("Garis tidak terdeteksi");
  }
  
Serial.print(" LastError= ");
Serial.println(LastError);
delay(500);
}
