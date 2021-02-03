#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;

int main(int argc, char** argv){
    io_context io;
    steady_timer t(io, chrono::seconds(5)); //5초 타이머를 생성
    t.wait(); //5초동안 대기를 타도록함
    std::cout << "complete!" << std::endl;
}