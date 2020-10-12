#pragma once

constexpr int disabledSpeed = 0;
constexpr int maxSpeed = 3000;

class Fan {
    int rpm = 0;

public:
    void setSpeed(int newRpm);
    int getSpeed() const;
};
