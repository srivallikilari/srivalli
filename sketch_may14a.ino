int switchPin=D3;
int switchPin1=D1;
int LedPin=D0;
int LedPin1=D4;
int switchValue;
int switchValue1;
void setup()
{
  pinMode(LedPin, OUTPUT);
  pinMode(LedPin1, OUTPUT);
  pinMode(switchPin,INPUT_PULLUP);
  pinMode(switchPin1,INPUT_PULLUP);
}
void loop()
{
  //read the switch value
  switchValue=digitalRead(switchPin);
  switchValue1=digitalRead(switchPin1);
  digitalWrite(LedPin,!switchValue);
  digitalWrite(LedPin1,!switchValue1);
}
