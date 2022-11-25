#include "io_handler.h"

#include <spdlog/spdlog.h>

io_handler::io_handler()
    : m_io()
    , m_signal_set(m_io)
    , m_sig_handlers() {
    set_signal(SIGTERM, [this] { spdlog::debug("service stop required"); m_io.stop(); });
    m_signal_set.async_wait([this](const auto& ec, const auto& signo) { on_signal(ec, signo); });
}

void io_handler::start() {
    m_io.run();
}

void io_handler::stop() {
    m_io.stop();
}

void io_handler::set_signal(int signo, std::function<void()> handler) {
    try {
        m_signal_set.add(signo);
        m_sig_handlers[signo] = std::move(handler);
    }
    catch (const std::exception& ex) {
        spdlog::error("failed to add signal handler for {}: {}", signo, ex.what());
    }
}

void io_handler::on_signal(boost::system::error_code ec, int signo) {
    if (!ec) {
        spdlog::debug("signal received {}", signo);

        if (const auto handler = m_sig_handlers.find(signo); handler != std::cend(m_sig_handlers)) {
            try {
                handler->second();
            }
            catch (const std::exception& ex) {
                spdlog::error("signal handler failed: {}", ex.what());
            }
        }
    }
    m_signal_set.async_wait([this](const auto& ec, const auto& signo) { on_signal(ec, signo); });
}
