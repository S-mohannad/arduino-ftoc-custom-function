float F1=0.0;
float F2=40.0;
void setup() {
Serial.begin(9600);
float C1=FtoC(F1);
float C2=FtoC(F2);
Serial.print(F1);
Serial.print("c1 is: ");
Serial.print(C1);
Serial.print("f2 is: ");
Serial.print(F2);
Serial.print("c2 is: ");
Serial.println(C2);
}
void loop() {
}
float FtoC(float f){
float c=f-32.0;
c=c*5.0/9.0;
return(c);
}