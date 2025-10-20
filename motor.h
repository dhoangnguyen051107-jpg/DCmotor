#ifndef MOTOR_H
#define MOTOR_H

class Motor {
public:
    Motor(int pwm, int dir);
    void khoi_tao();
    void dat_toc_do(int toc_do);
    void dung_lai();
private:
    int chan_pwm;
    int chan_huong;
};

#endif
