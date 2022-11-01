#include "service.h"

#include <iostream>

int main() {
    try {
        calculator::service().run();
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << "\n";
        return -1;
    }
    catch (...) {
        std::cout << "bruh\n";
        return -1;
    }
    return 0;
}
