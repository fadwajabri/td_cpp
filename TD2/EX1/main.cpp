#include <iostream>
#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    LinearSearch linear;
    JumpSearch jump;
    BinarySearch binary;

    int target = 7;

    int result = linear.search(data, target);
    linear.displaySearchResults(std::cout, result, target);

    result = jump.search(data, target);
    jump.displaySearchResults(std::cout, result, target);

    result = binary.search(data, target);
    binary.displaySearchResults(std::cout, result, target);

    return 0;
}
