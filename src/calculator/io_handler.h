#ifndef SANDBOX_DEV_IO_HANDLER_H
#define SANDBOX_DEV_IO_HANDLER_H

#include <boost/asio/io_context.hpp>
#include <boost/asio/signal_set.hpp>

#include <functional>
#include <unordered_map>

class io_handler {
public:
    io_handler();

    void start();
    void stop();

    void set_signal(int signo, std::function<void()> handler);

private:
    void on_signal(boost::system::error_code ec, int signo);

private:
    boost::asio::io_context m_io;
    boost::asio::signal_set m_signal_set;
    std::unordered_map<int, std::function<void()>> m_sig_handlers;
};


#endif  // SANDBOX_DEV_IO_HANDLER_H
