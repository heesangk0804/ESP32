#include <Wire.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("I2C Test");
  
  Wire.begin(0x13);             
  Wire.onReceive(receiveEvent); 
}

void loop()
{
  delay(500);
}

void receiveEvent(int howMany)
{
  Serial.println("I2C Test");
  while (Wire.available()) { 
    char ch = Wire.read(); 
    Serial.print(ch);
    Serial.println("I2C Found");         
  }      
  Serial.println("I2C Not Found");
  Serial.println();
}
