#ifndef SANDBOX_DEV_SERVICE_H
#define SANDBOX_DEV_SERVICE_H

#include "io_handler.h"
#include "config.h"
#include "engine.h"

namespace calculator {
    class service {
    public:
        service();
        ~service() = default;

        void run();

    private:
        void initialize();
        void finalize();

    private:
        io_handler m_io;
        config& m_config;
        engine m_engine;
    };
}  // namespace calculator

#endif  // SANDBOX_DEV_SERVICE_H
