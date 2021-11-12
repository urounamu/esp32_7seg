#pragma once

#include <Arduino.h>

void seg7_init();

void seg7_on(const uint8_t a, const uint8_t b, const uint8_t c, const uint8_t d,
             const uint8_t e, const uint8_t f, const uint8_t g);

void seg7_on_list(uint8_t *seg_list);

void seg7_on_dp(const uint8_t dp);

void seg7_set(const char *mode);

