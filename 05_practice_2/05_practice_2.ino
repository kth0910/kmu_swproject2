#define LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(1000);
  for(int i=0; i<5;i++){
    blink();
  }
  digitalWrite(LED, LOW);
  while(1){}
  
}

void blink(){
  digitalWrite(LED, LOW);
  delay(200);
  digitalWrite(LED, HIGH);
  delay(200);
}
