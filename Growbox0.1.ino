#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 5

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

int temp1, temp2;

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures(); 
  temp1 = sensors.getTempFByIndex(0);
  temp2 = sensors.getTempFByIndex(1);
  Serial.print("Temp 1 = ");
  Serial.println(temp1);
  Serial.print("Temp 2 = ");
  Serial.println(temp2);
  delay(500);
}
