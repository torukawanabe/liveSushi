/*
  liveSushi
  Make sushi alive!
 
  http://otomedengeibu.blogspot.jp/2013/08/yamaguchi-mini-maker-faire_21.html 
 */

int sushiPin = 11;

void setup() {
  pinMode(sushiPin, OUTPUT);
}

void loop() {
  vibe();
  delay(1000);
}

void vibe(){
  digitalWrite(sushiPin, HIGH);
  delay(100);
  digitalWrite(sushiPin, LOW);
  delay(50);
  digitalWrite(sushiPin, HIGH);
  delay(50);  
  digitalWrite(sushiPin, LOW);
}
