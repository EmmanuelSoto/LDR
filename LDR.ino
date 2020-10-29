void setup() {
pinMode (A0,INPUT);
pinMode (13,OUTPUT);
Serial.begin(9600);
}

float V=0;
float R=0;
float il=0;
float Van=0;

void loop() {
 delay (1000);
 V=analogRead(A0);
 Van=V*5/1023;
 R=615*((5/Van)-1);
 il=pow((R/128432), -1.1655);

 if(il<2000){
  digitalWrite(13,HIGH);
 }
 else{
  digitalWrite(13,LOW);
 }
 Serial.print("\n");
  Serial.print("INTENSIDAD LUMINOSA: ");
   Serial.print(il);
   Serial.print("lux");
   Serial.println("\n");
  Serial.print("RESISTENCIA: ");
   Serial.print(R);
   Serial.print("OHMS");
   Serial.println("\n");
  Serial.print("VOLTAJE ANALOGICO: ");
   Serial.print(Van);
   Serial.print("V");
   Serial.println();
    Serial.println();
}
