#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include "searching_algorithm.h"

class LinearSearch : public searching_algorithm{
    public : 
    int search(const std ::vector<int>& data, int target) override;

};
#endif

