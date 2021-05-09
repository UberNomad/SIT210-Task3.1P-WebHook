void setup()
{
  pinMode(D2, INPUT);
  Serial.begin(9600);
  delay(20000);
}

void loop()
{
  int output = digitalRead(D2);
  if(output == LOW )
  {
    Serial.print("No Motion\n");
    Particle.publish("motion", String(0), PRIVATE);
    delay(1000);
  }
  else
  {
    Serial.print("Motion\n");
    Particle.publish("motion", String(1), PRIVATE);
    delay(1000);
  }
}
