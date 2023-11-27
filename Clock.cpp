#include "Clock.h"

Clock::Clock() : isRunning(true) {}

void Clock::run() {
    while (isRunning) {
        displayTime();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void Clock::displayTime() const {
    auto currentDateTime = getCurrentDateTime();
    std::cout << "Current Date and Time: " << currentDateTime << std::endl;
}