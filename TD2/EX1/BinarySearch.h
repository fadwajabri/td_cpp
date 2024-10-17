#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include "searching_algorithm.h"

class BinarySearch : public searching_algorithm{
    public:
    int search(const std::vector<int>& data, int target) override;*

};
#endif