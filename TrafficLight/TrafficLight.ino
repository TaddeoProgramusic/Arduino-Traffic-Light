int LedR = 27;
int LedA = 26;
int LedV = 25;


void setup() 
{
  pinMode(LedR, OUTPUT);
  pinMode(LedA, OUTPUT);
  pinMode(LedV, OUTPUT);
}

void loop() 
{
  digitalWrite(LedR, HIGH);
  delay(3000);
  apagatd();
  digitalWrite(LedA, HIGH);
  delay(1500);
  apagatd();
  digitalWrite(LedV, HIGH);
  delay(3000);
  apagatd();
  digitalWrite(LedA, HIGH);
  delay(1500);
  apagatd();

  
}

void apagatd()
{
  digitalWrite(LedR, LOW);
  digitalWrite(LedA, LOW);
  digitalWrite(LedV, LOW);
}
