#include "engine.h"

namespace calculator {

    engine::engine(config& cfg)
        : m_config(cfg) {}

    int engine::sum(int first, int second) {
        return first + second;
    }
}  // namespace calculator
