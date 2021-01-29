/*
    2021/01/29
    vector에 있는 데이터로 accumulator 이용해보기
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/accumulators_fwd.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/max.hpp>

using namespace boost::accumulators;

int main(){
    std::vector<int> v{1, 2, 3};
    accumulator_set<int, features<tag::mean, tag::max>> acc; //int 데이터가 들어가면, 사용할 기능은 mean(평균), max(가장 큰 데이터)인 accumulator_set acc를 선언
    acc = std::for_each(v.begin(), v.end(), acc);
    /*
        for(int i : v) acc(i)
        해당 코드와 동일
    */
    std::cout << mean(acc) << std::endl;
    std::cout << max(acc) << std::endl;
}