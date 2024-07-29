#include <iostream>
#include <vector>
#include "sum_vector.h"

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = sum_vector(numbers);
    std::cout << "The sum of numbers from 1 to 5 is: " << sum << std::endl;
    return 0;
}