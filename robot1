int incomingByte;
void setup(){
Serial.begin(9600);
}
void loop(){
 if(Serial.available()>0){
   incomingByte = Serial.read();
   if(incomingByte =='w'){
     analogWrite(5,255);
     analogWrite(6,255);
     analogWrite(3,0);
     analogWrite(4,0);
}
if(incomingByte =='s'){
     analogWrite(5,0);
     analogWrite(6,0);
     analogWrite(3,255);
     analogWrite(4,255);
}
if(incomingByte =='a'){
     analogWrite(5,255);
     analogWrite(6,0);
     analogWrite(3,0);
     analogWrite(4,0);
}
if(incomingByte =='d'){
     analogWrite(5,0);
     analogWrite(6,255);
     analogWrite(3,0);
     analogWrite(4,0);
}
if(incomingByte =='z'){
     analogWrite(5,0);
     analogWrite(6,0);
     analogWrite(3,0);
     analogWrite(4,0);
}
 }
}
