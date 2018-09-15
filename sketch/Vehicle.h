#ifndef Vehicle_h
#define Vehicle_h

#include <MotorDriver.h>

#define MOTOR1 1
#define MOTOR2 2
#define MOTOR3 3
#define MOTOR4 4

class Vehicle {
  public:
    Vehicle(MotorDriver driver);
    void move_forward();
    void move_backward();
    void stop();
    void spin_left();
    void spin_right();
  private:
    MotorDriver motorDriver;
    int speed;
};
#endif
