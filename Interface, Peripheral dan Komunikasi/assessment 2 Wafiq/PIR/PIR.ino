int calibrationTime = 3;
long unsigned int lowIn;
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;

int pirPin = 11; 
int led1 = A0;
int led2 = A1;
int led3 = A2;
int buzzer = A5;
int tombol = 7;

int tekan=0;

void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.println("Tekan tombol untuk mengaktifkan");
  
   }

void loop(){
  int stat=digitalRead(tombol);
  int adapenyusup=0;
  int adapenyusup2=0;
  if (stat==HIGH){
    tekan=tekan+1;
  }

  if (tekan==1){
    Serial.print("[Tombol = 1] ");
    Serial.println("Sensor PIR aktif");
    delay(500);
  }
  else if (tekan==2){
    Serial.println("[Tombol = 2] Mendeteksi...");
    if(digitalRead(pirPin)==HIGH){
      adapenyusup=1;
    }
    if (adapenyusup>=1){
        Serial.println("Penyusup terdeteksi");
        digitalWrite(buzzer,HIGH);
        delay(500);
      }adapenyusup2+=1;
    delay(500);
  }
  else if (tekan==3){
    Serial.print("[Tombol = 3] ");
    Serial.println("Mendeteksi...");
    digitalWrite(buzzer,LOW);
    
    if(digitalRead(pirPin)==HIGH){
      adapenyusup2=1;
    }
    if(adapenyusup2>=1){
      Serial.println("Penyusup terdeteksi");
      for(int i=0; i<=255; i+=10){
        analogWrite(led1,i);
        analogWrite(led2,i);
        analogWrite(led3,i);
        delay(100);
      }
      for (int j=255; j>=0; j-=10){
        analogWrite(led1,j); 
        analogWrite(led2,j); 
        analogWrite(led3,j); 
        delay(100);
      }adapenyusup2+=1;
    }
    else if(adapenyusup2==0){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
    }delay(500);
  }
}





 
