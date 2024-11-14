#include "TimeSeriesGenerator.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>   

TimeSeriesGenerator::TimeSeriesGenerator() {
    seed = static_cast<int>(time(0)); 
    srand(seed);
}

TimeSeriesGenerator::TimeSeriesGenerator(int s) : seed(s) {
    srand(seed);
}

void TimeSeriesGenerator::printTimeSeries(const std::vector<double>& series) {
    for (double value : series) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}
