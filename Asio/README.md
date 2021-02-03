# Asio
## 주요 내용
### 타입
* boost::asio::io_context : I/O 실행 컨텍스트
* boost::asio::steady_timer(io, {boost::asio::chrono}) : 타이머
* boost::system::error_code : 오류 코드 타입
### 기능
* boost::asio::chrono : seconds, hours, milliseconds 등 타이머들이 들어있음
### 함수
* boost::asio::steady_timer::async_wait : 매개변수로 rvalue 참조인 함수를 넣으면, 설정한 시간만큼 대기 타고, io에는 해당 함수가 들어감.
* boost::asio::io_context::run : async_wait를 이용하여, 넣은 함수를 실행함(물론 설정한 시간만큼 대기)