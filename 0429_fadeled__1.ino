int greenPin = 4;
int bluePin = 7;
int redPin = 2;// 핀 번호 설정.
// C++ code
// 이 코드는 실행시 한 번만 실행된다
// 실행하는 곳
void setup() 
{
  // LED를 출력으로 설정
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
// 반복하여 일을 실행시키는 곳
void loop()
{
  digitalWrite(redPin, HIGH);
  delay(1000);
  digitalWrite(bluePin, HIGH);
  delay(1000);
  digitalWrite(greenPin, HIGH);
  delay(1000); // 1초 기다리기
  //LED를 킨다
  digitalWrite(redPin, LOW);
  delay(1000);
  digitalWrite(bluePin, LOW);
  delay(1000);
  digitalWrite(greenPin, LOW);
  delay(1000); // 1초 기다리기
  // LED를 끈다
}