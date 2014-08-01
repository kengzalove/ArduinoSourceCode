void setup() {
for(int z=2;z<=9;z++){
pinMode(z, OUTPUT);
}
}
void loop() {
for(int z=2;z<=9;z++){
digitalWrite(z, HIGH);
delay(50);
digitalWrite(z, LOW);
delay(50);
}
for(int z=9;z>=2;z--){
digitalWrite(z, HIGH);
delay(50);
digitalWrite(z, LOW);
delay(50);
