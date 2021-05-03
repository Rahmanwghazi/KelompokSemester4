int sensor1=A5;
int sensor2=A4;
int sensor3=A3;
int sensor4=A2;
int sensor5=A1;
int sensor6=A0;
int led1=4;
int led2=12;

int in1=10;
int in2=9;
int in3=6;
int in4=5;

char buff[100];

String stringkondisi="000000";
String lastkondisi="000000";
int Error=0;

int sensor[8],x, sensorBit, t, a_size;
char sendat[8];


void setup() {
  Serial.begin(9600);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
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

  sensor[0]=digitalRead(sensor1);
  sensor[1]=digitalRead(sensor2);
  sensor[2]=digitalRead(sensor3);
  sensor[3]=digitalRead(sensor4);
  sensor[4]=digitalRead(sensor5);
  sensor[5]=digitalRead(sensor6);

  
  delay(50);
  for (x=5;x>=0;x--){
    if(sensor[x] != 0 || sensor[x]== HIGH){
      sendat[x]='1';
    }
    else {
      sendat[x]='0';
    }
  }

  sensorBit=0;
  for (x=0;x<=5;x++){
    sensorBit += sendat[x] * (1 << x);
  }

  sprintf(buff, "%3d %3d %3d %3d %3d %3d ", sensor[0], sensor[1],sensor[2],sensor[3],sensor[4],sensor[5]);
  Serial.print(buff);
  sprintf(buff, "%c%c%c%c%c%c",sendat[0],sendat[1],sendat[2],sendat[3],sendat[4],sendat[5]);
  Serial.println(buff);

  int a_size = sizeof(sendat)/sizeof(char);
  String stringkondisi = convertKeString(sendat, a_size);
  
   digitalWrite(in1,HIGH);
   digitalWrite(in3,HIGH);
   
  if(stringkondisi=="110000"){
   analogWrite(in1,15);
   analogWrite(in3,40);
   Error = -2;
   lastkondisi=stringkondisi;
  }
  else if(stringkondisi=="100000"){
   analogWrite(in1,15);
   analogWrite(in3,40);
   Error = -2;
   lastkondisi=stringkondisi;
  }
  else if(stringkondisi=="010000"){
   analogWrite(in1,15);
   analogWrite(in3,40);
   Error = -1;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="011000"){
   analogWrite(in1, 76);
   analogWrite(in3, 153);
   Error = -1;
   lastkondisi=stringkondisi;
  }
  else if(stringkondisi=="001000"){
     analogWrite(in1, 76);
     analogWrite(in3, 153);
     Error = 0;
     lastkondisi=stringkondisi;
    } 
  
  if(stringkondisi=="001100"){
   analogWrite(in1, 204);
   analogWrite(in3, 204);
   Error = 0;
   lastkondisi=stringkondisi;
  }
  else if(stringkondisi=="000100"){
   analogWrite(in1, 204);
   analogWrite(in3, 204);
   Error = 0;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="000110"){
  
   analogWrite(in1, 153);
   analogWrite(in3, 76);
   Error = 1;
   lastkondisi=stringkondisi;
  }
  else if(stringkondisi=="000010"){
  
   analogWrite(in1, 153);
   analogWrite(in3, 76);
   Error = 1;
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="000011"){
   
   analogWrite(in1, 40);
   analogWrite(in3, 15);
   Error = 2;
   lastkondisi=stringkondisi;
  }
  if(stringkondisi=="000001"){
   
   analogWrite(in1, 40);
   analogWrite(in3, 15);
   Error = 2;
   lastkondisi=stringkondisi;
  } 

  if(stringkondisi=="000000"){

   analogWrite(in1, 15);
   analogWrite(in3, 15);
   lastkondisi=stringkondisi;
   Serial.println("Robot keluar lintasan!");
   
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   delay(1000);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   delay(1000);
   
  }

  
Serial.print(" Error= ");
Serial.println(Error);
delay(500);
}
