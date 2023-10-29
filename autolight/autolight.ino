void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A3);
    val = map(val, 0, 1023, 0, 255);
    Serial.println(val);
   analogWrite(11, val/4);

}
