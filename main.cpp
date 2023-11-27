#include "Utils.h"
#include <iostream>
#include <thread>

int main() {
    while (true) {
        std::string dateTime = getCurrentDateTime();
        if (!dateTime.empty()) {
            std::cout << '\r' << dateTime << std::flush;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}