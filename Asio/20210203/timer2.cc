#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;

void print(const boost::system::error_code&){
    std::cout << "complete!" << std::endl;
}

int main(int argc, char** argv){
    io_context io;
    steady_timer t(io, chrono::seconds(5)); //io로는 io로, 설정한 타임은 5촐 설정한 t를 선언
    t.async_wait(&print); //async_wait를 통하여, 함수를 넣도록 함
    io.run(); //5초 대기후 함수 실행
    return 0;
}