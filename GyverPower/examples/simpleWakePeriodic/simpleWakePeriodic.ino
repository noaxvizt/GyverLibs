// самый простой пример, для слабонервных =)
#include <GyverPower.h>

void setup() {
  //Serial.begin(9600);
  // сериал для демонстрации!
  // по умолчанию стоит самый экономный режим сна POWER DOWN
}

void loop() {
  // опрашиваем датчики, мигаем светодиодами, etc
  // ...
  // ...
  
  //Serial.println("go sleep");
  //delay(300);

  // спим 5 секунд (5000 мс)  
  power.sleepDelay(5000);
  // тут проснулись и код продолжает выполняться
  
  //Serial.println("wake up!");
  //delay(300);
}