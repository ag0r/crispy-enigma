const int BUTTON_PIN = 2;
const int LED_PIN = 7;

int button_state = LOW;
int previous_state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  button_state = digitalRead(BUTTON_PIN);

  if (button_state != previous_state) {
    if (button_state == HIGH) {
      Serial.write("Test");
    }

    delay(50);
  }

  previous_state = button_state;
}
