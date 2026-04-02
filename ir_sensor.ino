//to remember 
//- IR sensor - detect object bw 2 to 60 cm 
//- the white led give the ir rays if obj present ->the ir ray bounces from the obj to black led 
//-the output is low when obj is detected 



int irsensor = 2;
int buzzer =8;
void setup() {
  Serial.begin(9600);

 
  pinMode(irsensor,INPUT);
  pinMode(buzzer,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorstatus= digitalRead(irsensor);
  if(sensorstatus==1){
    digitalWrite(buzzer,LOW);
    Serial.println("OBJECT NOT DETECTED");
  }
  else{
    Serial.println("OBJECT DETECTED");
    digitalWrite(buzzer,HIGH);
  }
delay(500);
}
