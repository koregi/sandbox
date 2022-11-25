#include "service.h"

#include <spdlog/spdlog.h>

int main() {
    spdlog::set_level(spdlog::level::debug);

    try {
        calculator::service().run();
    }
    catch (const std::exception& ex) {
        spdlog::error("calculator service error: {}", ex.what());
        return -1;
    }
    catch (...) {
        spdlog::error("calculator service unknown error");
        return -1;
    }
    return 0;
}
