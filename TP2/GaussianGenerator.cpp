#include "GaussianGenerator.h"
#include <cmath>    
#include <cstdlib> 
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

GaussianGenerator::GaussianGenerator() : TimeSeriesGenerator(), mean(0.0), stddev(1.0) {}

GaussianGenerator::GaussianGenerator(int seed, double mean, double stddev)
    : TimeSeriesGenerator(seed), mean(mean), stddev(stddev) {}
std::vector<double> GaussianGenerator::generateTimeSeries(int size) {
    std::vector<double> series;
    series.reserve(size);

    for (int i = 0; i < size; ++i) {
        double u1 = static_cast<double>(rand()) / RAND_MAX;
        double u2 = static_cast<double>(rand()) / RAND_MAX;

        double z0 = std::sqrt(-2.0 * std::log(u1)) * std::cos(2.0 * M_PI * u2);
        double gaussian_value = mean + z0 * stddev;

        series.push_back(gaussian_value);
    }

    return series;
}
