int an1=11;
int an2=A0;
int an3=A1;
int an4=A2;
int an5=A3;
int an6=A4;
int an7=A5;
int an8=3;

int in1=9;
int in2=10;
int in3=5;
int in4=6;

char buff[100];

String stringkondisi="00000000";
String lastkondisi="00000000";
int LastError=0;

int sensor[8],x, sensorBit, t, a_size;
char sendat[8];

int Kp=5;
int moveControl=0;
int kecepatanMotorKanan=0;
int kecepatanMotorKiri=0;
int kecepatanSetPoint=150;




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
   LastError = -7;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }

  if(stringkondisi=="11000000"){
   LastError = -6;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="01000000"){
   LastError = -5;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="01100000"){
   LastError = -4;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="00100000"){
   LastError = -3;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="00110000"){
   LastError = -2;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  

  if(stringkondisi=="00010000"){
   LastError = -1;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  if(stringkondisi=="00011000"){
   LastError = 0;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00001000"){
   LastError = 1;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00001100"){
   LastError = 2;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000100"){
   LastError = 3;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000110"){
   LastError = 4;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000010"){
   LastError = 5;
   lastkondisi=stringkondisi;
  }
   if(stringkondisi=="00000011"){
   LastError = 6;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }

  if (stringkondisi=="00000001"){
   LastError = 7;
   moveControl=Kp*LastError;
   kecepatanMotorKanan=kecepatanSetPoint-moveControl;
   kecepatanMotorKiri=kecepatanSetPoint+moveControl;
   analogWrite  (in1,kecepatanMotorKiri);
   analogWrite  (in3, kecepatanMotorKanan);
   lastkondisi=stringkondisi;
  }
  if (stringkondisi=="00000000"){
    digitalWrite (in1, LOW);
    digitalWrite (in3, LOW);
    Serial.println("Garis tidak terdeteksi");
  }
  
Serial.print(" LastError= ");
Serial.println(LastError);
delay(500);
}
