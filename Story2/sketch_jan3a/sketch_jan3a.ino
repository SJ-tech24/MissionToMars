int LED_RED = 11;
int LED_BLUE = 12;

// C++ code
//
void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

void loop()
{
  digitalWrite(LED_RED, HIGH);
  delay(1000); 
  digitalWrite(LED_RED, LOW);
  delay(0); 
  digitalWrite(LED_BLUE, HIGH);
  delay(1000); 
  digitalWrite(LED_BLUE, LOW);
  delay(0); 
}