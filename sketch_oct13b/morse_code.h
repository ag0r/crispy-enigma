const int DOT = 250;
const int DASH = 750;
const int PAUSE = 250;
const int ledPin = 7;

void check_char(char letter){
  //a = DOT + PAUSE + DASH
  if (letter == 'a')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
  }
  //b = DASH + PAUSE + DOT + PAUSE + DOT + PAUSE + DOT
  if (letter == 'b')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
  }
  //C = DASH + PAUSE + DOT + PAUSE + DASH + PAUSE + DOT
  if (letter == 'c')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
  }
  //D = DASH + PAUSE + DOT + PAUSE + DOT
  if (letter == 'd')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
  }
  digitalWrite(ledPin, LOW);
  //E = DOT
  if (letter == 'e')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
  }
  //F = DOT + PAUSE + DOT + PAUSE + DASH + PAUSE + DOT
  if (letter == 'f')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //G = DASH + PAUSE + DASH + PAUSE + DOT
  if (letter == 'g')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //h = DOT + PAUSE + DOT + PAUSE + DOT + PAUSE + DOT
  if (letter == 'h')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  // = DOT + PAUSE + DOT
  if (letter == 'i')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //j = DOT + PAUSE + DASH + PAUSE + DASH + PAUSE + DASH
  if (letter == 'j')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //k = DASH + PAUSE + DOT + PAUSE + DASH
  if (letter == 'k')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //l = DOT + PAUSE + DASH + PAUSE + DOT + PAUSE + DOT
  if (letter == 'l')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //m = DASH + PAUSE + DASH
  if (letter == 'm')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //n = DASH + PAUSE + DOT
  if (letter == 'n')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //o = DASH + PAUSE + DASH + PAUSE + DASH
  if (letter == 'o')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //p = DOT + PAUSE + DASH + PAUSE + DASH + PAUSE + DOT
  if (letter == 'p')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //q = DASH + PAUSE + DASH + PAUSE + DOT + PAUSE + DASH
  if (letter == 'q')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //r = DOT + PAUSE + DASH + PAUSE + DOT
  if (letter == 'r')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //s = DOT + PAUSE + DOT + PAUSE + DOT
  if (letter == 's')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //t = DASH
  if (letter == 't')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //u = DOT + PAUSE + DOT + PAUSE + DASH
  if (letter == 'u')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //v = DOT + PAUSE + DOT + PAUSE + DOT + PAUSE + DASH
  if (letter == 'v')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //w = DOT + PAUSE + DASH + PAUSE + DASH
  if (letter == 'w')
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //x = DASH + PAUSE + DOT + PAUSE + DOT + PAUSE + DASH
  if (letter == 'x')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //y = DASH + PAUSE + DOT + PAUSE + DASH + PAUSE + DASH
  if (letter == 'y')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
  //z = DASH + PAUSE + DASH + PAUSE + DOT + PAUSE + DOT
  if (letter == 'z')
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
    delay(PAUSE);
  }
}
