//www.elegoo.com
//2016.12.08

//使用する3つのピンを定義する。
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  //8ピンのスイッチが押されると、LEDが消灯
  if (digitalRead(buttonApin) == LOW) 
  {
    digitalWrite(ledPin, HIGH);
  }
  //9ピンのスイッチが押されると、LEDが点灯
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
