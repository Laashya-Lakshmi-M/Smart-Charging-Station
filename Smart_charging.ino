#include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
#include<SoftwareSerial.h>
long t2=0 , t3=0, t4=0;
SoftwareSerial ser(5,6):
String stri, strj, strk;
char buf1[16];
char buf2[16];
char buf3[16];

Sring apiKey = "";

int count2=0;
int count3=0;
int i=0;
int sem=0;
int count=0;
int count1=0;
int bill =50;
long measurementStartTime=0;
int sensepin = A4;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);

  ser.begin(115200);

  ser.println("AT+RST");
  delay(500);

  ser.println("AT+CWMODE=3");
  delay(500);

  ser.println("AT+CWJAP=\ "project\", \"12345678\"");
  delay(500);

  lcd.setCursor(0,0);
  lcd.print("Meter");

  lcd.setCursor(0,1);
  lcd.print("Bill");
 
  analogReference(DEFAULT);
  pinMode(A3, OUTPUT);
  digitalWrite(A3,HIGH); //relay
  pinMode(A5, OUTPUT);
  digitalWrite(A5,LOW); //buzzer
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(A0)==0){
    lcd.setCursor(0,0);
      lcd.print("Charging : Yes");
    digitalWrite(A3, LOW);
    i=1;
  }
  else{
    i=0;
    count=0;
    lcd.setCursor(0,0);
    lcd.print("Charging : No");
     digitalWrite(A3, HIGH);
  }
  if((i==1) && (sem==0)){
    sem=1;
    count1=count1+10;
    count=count+10;
    Serial.println(count1);
  }
  lcd.setCursor(8,1);
  lcd.print(count);
  lcd.print("  ");

  stri = dtostrf(count, 4,1,buf1);

  if(millis() - t2>15000 && sem==1){
    sem=0;
    t2=millis();
    
  }
}
