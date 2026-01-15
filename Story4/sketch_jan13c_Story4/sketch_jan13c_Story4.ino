//C++

int leftReverse = 12;
int leftFoward = 11;
int leftEnable = 10;
int rightEnable = 9;
int rightFoward = 8;
int rightReverse = 7;

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
  forward(5000);
  // Wait 5 seconds
  stop(1000);
  // Wait 1 second
  reverse(2000);
  // Wait 2 seconds
}

void forward(int delaytime) {
  digitalWrite(leftEnable, HIGH);
  digitalWrite(rightEnable, HIGH);
  digitalWrite(leftFoward, HIGH);
  digitalWrite(rightFoward, HIGH);
  digitalWrite(leftReverse, LOW);
  digitalWrite(rightReverse, LOW);
  delay(delaytime);
}

void reverse(int delaytime) {
  digitalWrite(leftEnable, HIGH);
  digitalWrite(rightEnable, HIGH);
  digitalWrite(leftFoward, LOW);
  digitalWrite(rightFoward, LOW);
  digitalWrite(leftReverse, HIGH);
  digitalWrite(rightReverse, HIGH);
  delay(delaytime);
}

void stop(int delaytime) {
  digitalWrite(leftEnable, LOW);
  digitalWrite(rightEnable, LOW);
  digitalWrite(leftFoward, LOW);
  digitalWrite(rightFoward, LOW);
  digitalWrite(leftReverse, LOW);
  digitalWrite(rightReverse, LOW);
  delay(delaytime);
}