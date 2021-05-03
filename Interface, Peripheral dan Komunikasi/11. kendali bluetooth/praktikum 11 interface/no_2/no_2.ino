int led[8]={2,3,4,5,6,7,8,9};
void setup() {
 Serial.begin(9600);
 for(int i=0; i<8; i++)
 {
 pinMode(led[i],OUTPUT);
 digitalWrite(led[i],LOW);
 }
}
void loop() {
 if(Serial.available())
 {
 char temp = (char)Serial.read();
 if(temp=='A')
 {
 digitalWrite(led[0],HIGH);
 }
 if(temp=='a')
 {
 digitalWrite(led[0],LOW);
 }
 if(temp=='B')
 {
 digitalWrite(led[1],HIGH);
 }
 if(temp=='b')
 {
 digitalWrite(led[1],LOW);
 }
 if(temp=='C')
 {
 digitalWrite(led[2],HIGH);
 }
 if(temp=='c')
 {
 digitalWrite(led[2],LOW);
 }
 if(temp=='D')
 {
 digitalWrite(led[3],HIGH);
 }
 if(temp=='d')
 
{
 digitalWrite(led[3],LOW);
 
}
 if(temp=='E')
 
{
 digitalWrite(led[4],HIGH);
 
}
 if(temp=='e')
 
{
 digitalWrite(led[4],LOW);
 
}
 if(temp=='F')
 
{
 digitalWrite(led[5],HIGH);
 
}
 if(temp=='f')
 
{
 digitalWrite(led[5],LOW);
 
}
 if(temp=='G')
 
{
 digitalWrite(led[6],HIGH);
 
}
 if(temp=='g')
 
{
 digitalWrite(led[6],LOW);
 
}
 if(temp=='H')
 
{
 digitalWrite(led[7],HIGH);
 
}
 if(temp=='h')
 
{
 digitalWrite(led[7],LOW);
 
}
 if(temp=='#')
 
{
 for(int i=0; i<8; i++)
 
{
 digitalWrite(led[i],LOW);
 
}
 
}
 Serial.print(temp);
 
}
}
