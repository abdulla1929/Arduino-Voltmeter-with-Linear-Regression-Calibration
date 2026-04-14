#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

const int voltmeter=A1;
int VADC;
float voltage;


void setup() {
lcd.init();
lcd.backlight();
Serial.begin(9600);
}

void loop() {
VADC =analogRead(voltmeter);

voltage = (-0.00981874658457826 + 0.01) + 0.0246398932559307*VADC;  // Added 0.01 to the intercept to correct the 0.01 V offset 

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Voltage: ");
lcd.print(voltage);
lcd.print('V');
delay(1000);
}