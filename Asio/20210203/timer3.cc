#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind/bind.hpp>

using namespace boost::asio;

void _print(const boost::system::error_code&, steady_timer* t, int* count){
    if(*count < 5){
        std::cout << *count << std::endl;
        (*count)++;
        t->expires_at(t->expiry() + chrono::seconds(1));
        t->async_wait(boost::bind(_print, placeholders::error, t, count));
    }
}

int main(int argc, char** argv){
    io_context io;
    int count = 0;
    steady_timer t(io, chrono::seconds(5));
    t.async_wait(boost::bind(&_print, placeholders::error, &t, &count));
    io.run();
    return 0;
}