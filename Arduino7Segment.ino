

// Define pin numbers
int pinA = 2;   // goes to 7-Segment Pin 11
int pinB = 3;   // goes to 7-Segment Pin 7
int pinC = 4;   // goes to 7-Segment Pin 4
int pinD = 5;   // goes to 7-Segment Pin 2
int pinE = 6;   // goes to 7-Segment Pin 1
int pinF = 7;   // goes to 7-Segment Pin 10
int pinG = 8;   // goes to 7-Segment Pin 5

// Common pins
int D1 = 9;     // goes to 7-Segment Pin 12
int D2 = 10;    // goes to 7-Segment Pin 9
int D3 = 11;    // goes to 7-Segment Pin 8
int D4 = 12;    // goes to 7-Segment Pin 6


// Delay
int myDelay = 400;



// put your setup code here, to run once:
void setup() 
{
  // Setup pinA .. pinG as output
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}



// put your main code here, to run repeatedly:
void loop() 
{
  Write0();
  delay(myDelay);

  Write1();
  delay(myDelay);

  Write2();
  delay(myDelay);

  Write3();
  delay(myDelay);

  Write4();
  delay(myDelay);

  Write5();
  delay(myDelay);

  Write6();
  delay(myDelay);

  Write7();
  delay(myDelay);

  Write8();
  delay(myDelay);

  Write9();
  delay(myDelay);
}


void Write0() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}

void Write1() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void Write2() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
}

void Write3() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
}

void Write4() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void Write5() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void Write6() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void Write7() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void Write8() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void Write9() 
{
  digitalWrite(D1, HIGH);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}
