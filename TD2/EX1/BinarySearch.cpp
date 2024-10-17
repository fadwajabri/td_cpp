#include "BinarySearch.h"

int BinarySearch::search(const std::vector<int>& data, int target) {
    numberComparisons = 0;
    int left = 0;
    int right = data.size() - 1;

    while (left <= right) {
        numberComparisons++;
        int mid = left + (right - left) / 2;

        if (data[mid] == target) {
            return mid; 
        }

        if (data[mid] < target) {
            left = mid + 1; 
            right = mid - 1; 
        }
    }

    return -1;
}
