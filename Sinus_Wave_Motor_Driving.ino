int in1=2;
int in2=3;
int ena=5;
double x=0;
double a;
double pi=3.14;
double dalga;
int i;
#include <math.h>
void setup() {
  Serial.begin(115200);
  delay(3000);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ena,OUTPUT);
}
void loop() {
  for(i;i<1;i++) {
  for(x;x<0.1;x=x+0.00001) {
  dalga=2*pi*270*x;
  a=sin(dalga);
  a=a*255;
 double c=map(a,-255,255,140,233);
 if(c>=140) {
 Serial.println(c);
 analogWrite(ena,c);
 digitalWrite(in1,HIGH);
 digitalWrite(in2,LOW);
 delay(30);
}
  }
analogWrite(ena,0);
digitalWrite(in1,HIGH);
digitalWrite(in2,HIGH);
}
}
