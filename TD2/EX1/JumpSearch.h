#ifndef JUMP_SEARCH_H
#define JUMP_SEARCH_H

#include "searching_algorithm.h"

class JumpSearch : public searching_algorithm{
    public : 
        int search(const std::vector<int>& data, int target) override;

};
#endif