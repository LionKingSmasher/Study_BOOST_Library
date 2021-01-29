#include <iostream>
#include <boost/accumulators/accumulators.hpp> //boost::accumulators
#include <boost/accumulators/accumulators_fwd.hpp> //features
#include <boost/accumulators/statistics/mean.hpp> //tag::mean
#include <boost/accumulators/statistics/min.hpp> //tag::min

using namespace boost::accumulators;

int main(){
    accumulator_set<long, features<tag::mean, tag::min>> acc;

    /* accumulator_set에 데이터 넣기 */
    acc(1.2);
    acc(2.2);

    std::cout << "Mean: " << mean(acc) << std::endl; //acc에 들어가있는 데이터들의 평균 나타내기
}