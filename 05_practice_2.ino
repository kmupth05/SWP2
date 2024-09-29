const int LED_PIN = 7; 

void setup() {
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  
  analogWrite(LED_PIN, 0); 

  delay(1000);                  

  // 다음 1초 동안 LED를 5회 깜빡이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, LOW);   
    delay(100);                   
    digitalWrite(LED_PIN, HIGH);  
    delay(100);                   
  }

  // LED 끄기
  analogWrite(LED_PIN, 255);  
  while(1){
  }
}
