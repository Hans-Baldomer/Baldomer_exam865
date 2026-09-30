//                     A   B   C   D    E   F  G
const uint8_t LED[] = {32, 33, 25, 26, 27, 14, 12};

void setup() {

for (int i=0; i < 7; i++){ //ABCDEFG
  pinMode(LED[i], OUTPUT);
}

}

void loop() {
  //Number 8
  digitalWrite(32, 1);
  digitalWrite(33, 1);
  digitalWrite(25, 1);
  digitalWrite(26, 1);
  digitalWrite(27, 1);
  digitalWrite(14, 1);
  digitalWrite(12, 1);
  delay(1000);
  //Number 6
  digitalWrite(32, 1);
  digitalWrite(33, 0);
  digitalWrite(25, 1);
  digitalWrite(26, 1);
  digitalWrite(27, 1);
  digitalWrite(14, 1);
  digitalWrite(12, 1);
  delay(1000);
  //Number 5
  digitalWrite(32, 1);
  digitalWrite(33, 0);
  digitalWrite(25, 1);
  digitalWrite(26, 1);
  digitalWrite(27, 0);
  digitalWrite(14, 1);
  digitalWrite(12, 1);
  delay(1000);

}
