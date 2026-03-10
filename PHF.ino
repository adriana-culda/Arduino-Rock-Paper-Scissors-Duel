int led1 = 8;
int led2 = 9;
int led3 = 10;
int val;
int val2;

void setup() {
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  val = random(8, 11);
  val2 = random(8, 11);
  // daca ambele numere sunt egale, sa genereze incontinuu 
  while (val == val2) {
    val2 = random(8, 11);
  }
  
  digitalWrite(val, HIGH);
  digitalWrite(val2, HIGH);

 // Vom compara LED-urile. Daca nu s-a aprins LED-ul 1, inseamna ca s-au aprins 2 si 3. Dintre foarfece si hartie, castiga foarfece
  if (digitalRead(led1) == LOW) {
    for (int i = 0; i < 3; i++) {
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      digitalWrite(led2, HIGH);
    }
  }
  // Daca nu s-a aprins LED-ul 2, s-au aprins 1 si 3. 
  else if (digitalRead(led2) == LOW) {
    for (int i = 0; i < 3; i++) {
      delay(500);
      digitalWrite(led3, LOW);
      delay(500);
      digitalWrite(led3, HIGH);
    }
  }
  else {
    for (int i = 0; i < 3; i++) {
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      digitalWrite(led1, HIGH);
    }
  }
  exit(0);
}