int LEDpin=D6;
int LEDpin1=D5;
int LEDpin2=D4;
void setup() {
  Serial.begin(9600);
 pinMode(D6,OUTPUT);
   pinMode(D5,OUTPUT);
    pinMode(D4,OUTPUT);
 }

void loop() {
  int dutycycle=analogRead(A0);
  if(dutycycle<=200 && dutycycle>=0)
  {
    
    Serial.print("Duty cycle: ");
    Serial.println(dutycycle);
  digitalWrite(LEDpin1,HIGH);
  digitalWrite(LEDpin2,LOW);
  digitalWrite(LEDpin,LOW);
  delay(1000);
  }
  else if(dutycycle<500&&dutycycle>200)
  {
    Serial.print("Duty cycle: ");
  Serial.println(dutycycle);
  digitalWrite(LEDpin2,HIGH);
  digitalWrite(LEDpin1,LOW);
  digitalWrite(LEDpin,LOW);
  delay(1000);
  }
 else if(dutycycle<1023&&dutycycle>500)
 {
  
  Serial.print("Duty cycle: ");
  Serial.println(dutycycle);
  digitalWrite(LEDpin,HIGH);
  digitalWrite(LEDpin1,LOW);
    digitalWrite(LEDpin2,LOW);
  delay(1000);
 }

}
