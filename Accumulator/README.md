# Accumulator

* 해당 목록은 accumulator 라이브러이에대한 공부입니다.

## 주요 내용

* boost::accumulators::accumulator_set<[타입], ...> : 누산기를 std::set처럼 되어있지만, 차이는 accumulator_set은 누산기 기능을 위해 사용하는 것 (boost/accumulators/accumulators.hpp)

* boost::accumulators::features<[기능]...> : features는 accumulator_set의 템플릿 중 ... 부분에 들어가는 것으로 간단하게 설명을 하면, accumulator_set에 min, max, count 같은 기능들을 선택하여 사용 가능 

### statistics
* boost::accumulators::max : accumulator_set 안에 있는 데이터 중 제일 큰 데이터를 뽑음. (boost/accumulators/statistics/max.hpp)
* boost::accumulators::min : accumulator_set 안에 있는 데이터 중 제일 작은 데이터를 뽑음. (boost/accumulators/statistics/min.hpp)
* boost::accumulators::count : accumulator_set 안에 있는 데이터 개수를 보여줌 (boost/accumulators/statistics/count.hpp)
* boost::accumulators::mean : accumulator_set 안에 있는 데이터의 평균을 보여줌 (boost/accumulators/statistics/mean.hpp)
* boost::accumulators::sum : accumulator_set 안에 있는 데이터의 합을 보여줌 (boost/accumulators/statistics/sum.hpp)

* 그외 추가 예정