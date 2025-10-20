#include "motor.h"
#include <Arduino.h>

Motor::Motor(int pwm, int dir) : chan_pwm(pwm), chan_huong(dir) {}

void Motor::khoi_tao() {
    pinMode(chan_pwm, OUTPUT);
    pinMode(chan_huong, OUTPUT);
}

void Motor::dat_toc_do(int toc_do) {
    bool huong = toc_do >= 0;
    digitalWrite(chan_huong, huong);
    analogWrite(chan_pwm, abs(toc_do));
}

void Motor::dung_lai() {
    analogWrite(chan_pwm, 0);
}
