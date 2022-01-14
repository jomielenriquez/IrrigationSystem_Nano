
const int AirValue = 620;   //you need to replace this value with Value_1
const int WaterValue = 310;  //you need to replace this value with Value_2
int soilMoistureValue = 0;
int soilmoisturepercent=0;
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop() {
  soilMoistureValue = analogRead(A1);  //put Sensor insert into soil
  Serial.println(soilMoistureValue);
  
  delay(50);
}
