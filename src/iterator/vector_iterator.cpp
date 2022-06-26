#include <iostream>
#include <vector>

auto main() -> int {
    auto numbers = std::vector<int>{1, 2, 3, 4, 5};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        // Use * to access the value at the iterator
        std::cout << *it << std::endl;
    }
    // 1
    // 2
    // 3
    // 4
    // 5
}