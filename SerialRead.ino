int led = 13;
int state = 0;

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){
    state = Serial.read()
  }

  if(state=='0') {
    digitalWrite(led,LOW);
  }
  if(state=='1') {
    digitalWrite(led,HIGH);
  }

}
