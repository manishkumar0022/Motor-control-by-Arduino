










int relay1=2;
int relay2=3;

void setup() {
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);

  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);

  Serial.begin(9600);
  Serial.println(" project title ");
  Serial.println("Using 2 Relays");
  delay(2000);
}

void loop() {

    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,LOW);
    Serial.println("Rotating in CCW");
    delay(3000);

    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,LOW);
    Serial.println("Stopped");
    delay(2000);

    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,LOW);
    Serial.println("Rotating in CCW");
    delay(3000);

    Serial.println("================");
}
