void setup()
{
  Serial.begin(115200);
  do{
  Serial.println("Printed at setup!");
  delay(5000);
  } while (!Serial);

  Serial.println("Printed at setup!");
}
 
void loop()
{
  Serial.println("Hello World!");
  delay(1000);
}