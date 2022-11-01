#include "service.h"

#include <fmt/format.h>

namespace calculator {
    service::service()
        : m_config(config::instance())
        , m_engine(m_config) {}

    // TODO [pavelbezpavel]: bruh...
    void service::run() {
        fmt::print("{}\n", engine::sum(m_config.get_value(), m_config.get_value()));
    }
}  // namespace calculator
