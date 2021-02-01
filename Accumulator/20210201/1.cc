#include <iostream>
#include <boost/accumulators/accumulators.hpp> //accumulator_set 
#include <boost/accumulators/accumulators_fwd.hpp>  //features
#include <boost/accumulators/statistics/count.hpp> //count

using namespace boost::accumulators;

int main(void){
    accumulator_set<int, features<tag::count>> acc;
    acc(1);
    acc(2);
    std::cout << count(acc) << std::endl;
}