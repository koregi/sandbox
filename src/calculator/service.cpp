#include "service.h"

#include <iostream>

namespace calculator {
    service::service()
        : m_config(config::instance())
        , m_engine(m_config) {}

    // TODO [pavelbezpavel]: bruh...
    void service::run() {
        std::cout << engine::sum(m_config.get_value(), m_config.get_value()) << "\n";
    }
}  // namespace calculator
