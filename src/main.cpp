#include <Arduino.h>
#include "7seg/seg7.hpp"


void setup() {
  Serial.begin(115200);
  seg7_init();
}

void loop() {
  seg7_set("0");
  delay(500);
  seg7_set("1");
  delay(500);
  seg7_set("2");
  delay(500);
  seg7_set("3");
  delay(500);
  seg7_set("4");
  delay(500);
  seg7_set("5");
  delay(500);
  seg7_set("6");
  delay(500);
  seg7_set("7");
  delay(500);
  seg7_set("8");
  delay(500);
  seg7_set("9");
  delay(500);
  seg7_set("");
  seg7_on_dp(1);
  delay(500);
  seg7_on_dp(0);
  delay(1000);
}