#include "JumpSearch.h"
#include <cmath>


int JumpSearch::search(const std::vector<int>& data, int target) {
    numberComparisons = 0;
    int n = data.size();
    int step = std::sqrt(n);
    int prev = 0;

    while (data[std::min(step, n) - 1] < target) {
        numberComparisons++;
        prev = step;
        step += std::sqrt(n);
        if (prev >= n) {
            return -1; 
        }

    }
    for (int i = prev; i < std::min(step, n); i++) {
        numberComparisons++;
        if (data[i] == target) {
            return i; 
        }
    }
    return -1;
}