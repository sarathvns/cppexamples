#ifndef SUM_VECTOR_H
#define SUM_VECTOR_H

#include <vector>
#include <numeric>

int sum_vector(const std::vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0);
}

#endif // SUM_VECTOR_H
