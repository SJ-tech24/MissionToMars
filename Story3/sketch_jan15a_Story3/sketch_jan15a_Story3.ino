//C++

const int leftReverse = 12;
const int leftFoward = 11;
const int leftEnable = 10;
const int rightEnable = 9;
const int rightFoward = 8;
const int rightReverse = 7;
  
void setup()
{
  pinMode(leftReverse, OUTPUT);
  pinMode(leftFoward, OUTPUT);
  pinMode(leftEnable, OUTPUT);
  pinMode(rightReverse, OUTPUT);
  pinMode(rightFoward, OUTPUT);
  pinMode(rightEnable, OUTPUT);
}

void loop()
{
  digitalWrite(leftEnable, HIGH);
  digitalWrite(rightEnable, HIGH);
  digitalWrite(leftFoward, HIGH);
  digitalWrite(rightFoward, HIGH);
  digitalWrite(leftReverse, LOW);
  digitalWrite(rightReverse, LOW);
  delay(5000); // Wait 5 seconds
  digitalWrite(leftEnable, LOW);
  digitalWrite(rightEnable, LOW);
  digitalWrite(leftFoward, LOW);
  digitalWrite(rightFoward, LOW);
  digitalWrite(leftReverse, LOW);
  digitalWrite(rightReverse, LOW);
  delay(1000); // Wait 1 second
  digitalWrite(leftEnable, HIGH);
  digitalWrite(rightEnable, HIGH);
  digitalWrite(leftFoward, LOW);
  digitalWrite(rightFoward, LOW);
  digitalWrite(leftReverse, HIGH);
  digitalWrite(rightReverse, HIGH);
  delay(2000); // Wait 2 seconds
}
