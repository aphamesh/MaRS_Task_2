//AP HAMESH EC24B1132
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//intialising variables
int count=0,prev=1;
#define ir A0 
LiquidCrystal_I2C lcd(0x27,16,2);

//setting up the lcd and input pins
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Count: ");
  pinMode(ir, INPUT);
}


//loop condition to count and display in the LCD Screen
void loop() {
int pass =digitalRead(ir);
if(pass==0&&prev==1)
  {
    count=count+1;
    lcd.setCursor(0,1);
    lcd.print(count);
  }
  prev=pass;
 delay(200);

}