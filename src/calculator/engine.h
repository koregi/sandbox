#ifndef SANDBOX_DEV_ENGINE_H
#define SANDBOX_DEV_ENGINE_H

#include "config.h"

namespace calculator {
    class engine {
    public:
        explicit engine(config& cfg);
        ~engine() = default;

        static int sum(int first, int second);

    private:
        config& m_config;
    };
}  // namespace calculator

#endif  // SANDBOX_DEV_ENGINE_H
