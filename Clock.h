#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>
#include <chrono>
#include <thread>
#include "Utils.h"

class Clock {
public:
    Clock();
    void run();

private:
    bool isRunning;
    void displayTime() const;
};

#endif