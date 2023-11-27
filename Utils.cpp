#include "Utils.h"
#include <thread>

std::string getCurrentDateTime() {
    static std::time_t lastTime = 0;
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    if (lastTime != now_c) {
        lastTime = now_c;

        std::tm parts;
#ifdef _WIN32
        localtime_s(&parts, &now_c);
#else
        parts = *std::localtime(&now_c);
#endif

        std::ostringstream oss;
        oss << "Current Date and Time: " << std::put_time(&parts, "%Y-%m-%d %X");
        return oss.str();
    }

    return "";
}