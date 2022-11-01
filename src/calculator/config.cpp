#include "config.h"

namespace calculator {
    config::config()
        : m_value(42) {}

    config& config::instance() {
        static config cfg;
        return cfg;
    }

    int config::get_value() const {
        return m_value;
    }

    void config::set_value(int value) {
        if (m_value != value)
            m_value = value;
    }
}  // namespace calculator
