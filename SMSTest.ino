
#include<SoftwareSerial.h>
const int AirValue = 620;   //you need to replace this value with Value_1
const int WaterValue = 310;  //you need to replace this value with Value_2
int soilMoistureValue = 0;
int soilmoisturepercent=0;

SoftwareSerial sw(5,6);  //RX,TX
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
  sw.begin(115200);
}
void loop() {
  soilMoistureValue = analogRead(A1);  //put Sensor insert into soil
  Serial.println(soilMoistureValue);
  sw.println(String(soilMoistureValue));
  delay(1000);
}
