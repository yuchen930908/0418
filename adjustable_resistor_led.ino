// 定義腳位
const int potPin = A0; // 電位器連接的腳位
const int ledPin = 9;  // LED連接的腳位

void setup() {
  pinMode(ledPin, OUTPUT); // 設定LED腳位為輸出
}

void loop() {
  int potValue = analogRead(potPin); // 讀取電位器的值（0-1023）
  int ledBrightness = map(potValue, 0, 1023, 0, 255); // 將值映射到LED亮度範圍（0-255）
  analogWrite(ledPin, ledBrightness); // 調整LED亮度
  delay(10); // 短暫延遲
}
