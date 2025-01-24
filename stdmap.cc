#include <iostream>
#include <map>
#include <chrono>

void test_map_performance(size_t num_elements) {
    std::map<int, int> data;

    // Insert elements
    for (size_t i = 0; i < num_elements; ++i) {
        data[i] = i * 2;
    }

    // Perform lookups
    long long sum = 0;
    for (size_t i = 0; i < num_elements; ++i) {
        sum += data[i];
    }

    std::cout << "Final sum: " << sum << std::endl;
}

int main() {
    const size_t num_elements = 500000;

    auto start = std::chrono::high_resolution_clock::now();
    test_map_performance(num_elements);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Execution time: " << elapsed.count() << " seconds" << std::endl;

    return 0;
}
