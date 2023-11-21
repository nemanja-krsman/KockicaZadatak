int segment_a = 13;
int segment_b = 12;
int segment_c = 11;
int segment_d = 10;
int segment_e = 9;
int segment_f = 8;
int segment_g = 7;

void ukljuciBroj(int broj) {
  if (broj == 1) {
    digitalWrite(segment_a, LOW);
    digitalWrite(segment_b, HIGH);
    digitalWrite(segment_c, HIGH);
    digitalWrite(segment_d, LOW);
    digitalWrite(segment_e, LOW);
    digitalWrite(segment_f, LOW);
    digitalWrite(segment_g, LOW);
  } else if (broj == 2) {
    digitalWrite(segment_a, HIGH);
    digitalWrite(segment_b, HIGH);
    digitalWrite(segment_c, LOW);
    digitalWrite(segment_d, HIGH);
    digitalWrite(segment_e, HIGH);
    digitalWrite(segment_f, LOW);
    digitalWrite(segment_g, HIGH);
  } else if (broj == 3) {
    digitalWrite(segment_a, HIGH);
    digitalWrite(segment_b, HIGH);
    digitalWrite(segment_c, HIGH);
    digitalWrite(segment_d, HIGH);
    digitalWrite(segment_e, LOW);
    digitalWrite(segment_f, LOW);
    digitalWrite(segment_g, HIGH);
  } else if (broj == 4) {
    digitalWrite(segment_a, LOW);
    digitalWrite(segment_b, HIGH);
    digitalWrite(segment_c, HIGH);
    digitalWrite(segment_d, LOW);
    digitalWrite(segment_e, LOW);
    digitalWrite(segment_f, HIGH);
    digitalWrite(segment_g, HIGH);
  } else if (broj == 5) {
    digitalWrite(segment_a, HIGH);
    digitalWrite(segment_b, LOW);
    digitalWrite(segment_c, HIGH);
    digitalWrite(segment_d, HIGH);
    digitalWrite(segment_e, LOW);
    digitalWrite(segment_f, HIGH);
    digitalWrite(segment_g, HIGH);
  } else if (broj == 6) {
    digitalWrite(segment_a, HIGH);
    digitalWrite(segment_b, LOW);
    digitalWrite(segment_c, HIGH);
    digitalWrite(segment_d, HIGH);
    digitalWrite(segment_e, HIGH);
    digitalWrite(segment_f, HIGH);
    digitalWrite(segment_g, HIGH);
  }
}


void setup() {
  pinMode(segment_a, OUTPUT);
  pinMode(segment_b, OUTPUT);
  pinMode(segment_c, OUTPUT);
  pinMode(segment_d, OUTPUT);
  pinMode(segment_e, OUTPUT);
  pinMode(segment_f, OUTPUT);
  pinMode(segment_g, OUTPUT);

  pinMode(6, INPUT);
}

void loop() {
  for (int i = 1; i <= 6; i++) {
    ukljuciBroj(i);
    if (digitalRead(6) == 1) {
      while (digitalRead(6) == 1) {
      }
      while (digitalRead(6) == 0) {
      }
      while (digitalRead(6) == 1) {
      }
    }
    delay(200);
  }
}
