#include "service.h"

#include <spdlog/spdlog.h>

namespace calculator {
    service::service()
        : m_io()
        , m_config(config::instance())
        , m_engine(m_config) {}

    void service::run() {
        std::exception_ptr saved_ex;
        try {
            spdlog::info("starting service...");
            initialize();

            m_io.start();  // blocking call
        }
        catch (const std::exception& ex) {
            spdlog::error("service failed: {}", ex.what());
            saved_ex = std::current_exception();
        }

        try {
            finalize();
            spdlog::info("service event-loop finished");
        }
        catch (const std::exception& ex) {
            spdlog::error("service finalized failed: {}", ex.what());
            saved_ex = std::current_exception();
        }

        if (saved_ex)
            std::rethrow_exception(saved_ex);
    }

    void service::initialize() {
        // TODO
    }

    void service::finalize() {
        // TODO
    }
}  // namespace calculator
