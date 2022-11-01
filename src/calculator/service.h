#ifndef SANDBOX_DEV_SERVICE_H
#define SANDBOX_DEV_SERVICE_H

#include "config.h"
#include "engine.h"

namespace calculator {
    class service {
    public:
        service();
        ~service() = default;

        void run();

    private:
        config& m_config;
        engine m_engine;
    };
}  // namespace calculator

#endif  // SANDBOX_DEV_SERVICE_H
