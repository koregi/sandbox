#include "service.h"

#include <fmt/format.h>

int main() {
    try {
        calculator::service().run();
    }
    catch (const std::exception& ex) {
        fmt::print("calculator service error: {}\n", ex.what());
        return -1;
    }
    catch (...) {
        fmt::print("calculator service unknown error\n");
        return -1;
    }
    return 0;
}
