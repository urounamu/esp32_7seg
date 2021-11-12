#include "seg7.hpp"

#include "seg7_prameter.hpp"

//以下の設定は"seg7_parameter.hpp"に定義（Git追跡外）
// xxはGPIOのピン番号を指定
// static const uint8_t SEG7_a = xx;
// static const uint8_t SEG7_b = xx;
// static const uint8_t SEG7_c = xx;
// static const uint8_t SEG7_d = xx;
// static const uint8_t SEG7_e = xx;
// static const uint8_t SEG7_f = xx;
// static const uint8_t SEG7_g = xx;
// static const uint8_t SEG7_dp = xx;

void seg7_init() {
  pinMode(SEG7_a, OUTPUT);   // a
  pinMode(SEG7_b, OUTPUT);   // b
  pinMode(SEG7_c, OUTPUT);   // c
  pinMode(SEG7_d, OUTPUT);   // d
  pinMode(SEG7_e, OUTPUT);   // e
  pinMode(SEG7_f, OUTPUT);   // f
  pinMode(SEG7_g, OUTPUT);   // g
  pinMode(SEG7_dp, OUTPUT);  // dp
}

void seg7_on(const uint8_t a, const uint8_t b, const uint8_t c, const uint8_t d,
             const uint8_t e, const uint8_t f, const uint8_t g) {
  digitalWrite(SEG7_a, a);
  digitalWrite(SEG7_b, b);
  digitalWrite(SEG7_c, c);
  digitalWrite(SEG7_d, d);
  digitalWrite(SEG7_e, e);
  digitalWrite(SEG7_f, f);
  digitalWrite(SEG7_g, g);
  return;
}

void seg7_on_list(uint8_t *seg_list) {
  seg7_on(seg_list[0], seg_list[1], seg_list[2], seg_list[3], seg_list[4],
          seg_list[5], seg_list[6]);
  return;
}

void seg7_on_dp(const uint8_t dp) {
  digitalWrite(SEG7_dp, dp);
  return;
}

void seg7_set(const char *mode) {
  switch (*mode) {
    case '0':
      seg7_on(1, 1, 1, 1, 1, 1, 0);
      break;
    case '1':
      seg7_on(0, 1, 1, 0, 0, 0, 0);
      break;
    case '2':
      seg7_on(1, 1, 0, 1, 1, 0, 1);
      break;
    case '3':
      seg7_on(1, 1, 1, 1, 0, 0, 1);
      break;
    case '4':
      seg7_on(0, 1, 1, 0, 0, 1, 1);
      break;
    case '5':
      seg7_on(1, 0, 1, 1, 0, 1, 1);
      break;
    case '6':
      seg7_on(1, 0, 1, 1, 1, 1, 1);
      break;
    case '7':
      seg7_on(1, 1, 1, 0, 0, 1, 0);
      break;
    case '8':
      seg7_on(1, 1, 1, 1, 1, 1, 1);
      break;
    case '9':
      seg7_on(1, 1, 1, 1, 0, 1, 1);
      break;
    default:
      seg7_on(0, 0, 0, 0, 0, 0, 0);
      break;
  }
  return;
}