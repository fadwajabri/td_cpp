#ifndef SEARCHING_ALGORITHM_H
#define SEARCHING_ALGORITHM_H

#include <iostream>
#include <vector>

class searching_algorithm {
protected:

    int numberComparisons;
    static int totalComparisons;
    static int totalSearch;
    

public:
    
   searching_algorithm();
    virtual ~SearchingAlgorithm(); 
    virtual int search(const std::vector<int>& data, int target) = 0;
    void displaySearchResults(std::ostream& os, int result, int target);
    static double averageComparisons();
};

#endif 