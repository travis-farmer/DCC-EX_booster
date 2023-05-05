void setup() {
  pinMode(4,OUTPUT); digitalWrite(4,LOW);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT); digitalWrite(6,LOW);
}

void loop() {
  if (analogRead(0) > 1000 || analogRead(1) > 1000 || analogRead(2) > 1000 || analogRead(3) > 1000) {
    digitalWrite(4,HIGH);
    digitalWrite(6,LOW);
  } else {
    if (digitalRead(5) == LOW && digitalRead(4) == HIGH) {
      digitalWrite(4,LOW);
    } else if (digitalRead(5) == HIGH && digitalRead(4) == LOW) {
      digitalWrite(6,HIGH);
    }
  }
}
