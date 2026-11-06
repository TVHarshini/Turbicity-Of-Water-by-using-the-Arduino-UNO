
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int turbiditySensorPin = A0;
const float thresholdNTU = 50.0;

void setup() {
  lcd.init();
  lcd.backlight();

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Water Quality");

  lcd.setCursor(0, 1);
  lcd.print("Initializing...");

  delay(2000);
  lcd.clear();

  Serial.println("Water Quality Monitoring");
}

void loop() {
  int sensorValue = analogRead(turbiditySensorPin);

  float voltage = sensorValue * (5.0 / 1023.0);

  float ntu = -1120.4 * square(voltage)
              + 5742.3 * voltage - 4352.9;

  if (ntu < 0) {
    ntu = 0;
  }

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);

  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2);

  Serial.print(" V | NTU: ");
  Serial.println(ntu, 2);

  lcd.setCursor(0, 0);
  lcd.print("NTU: ");
  lcd.print(ntu, 2);
  lcd.print("   ");

  lcd.setCursor(0, 1);

  if (ntu > thresholdNTU) {
    lcd.print("Water Unsafe! ");
    Serial.println("Status: WATER UNSAFE");
  } else {
    lcd.print("Water Safe ");
    Serial.println("Status: WATER SAFE");
  }

  delay(2000);
}
