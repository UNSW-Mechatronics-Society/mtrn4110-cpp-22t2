#include <iostream>
#include <vector>

int main() {
    auto const number = 1;
    // number = 2; // Not allowed since const
    auto const numbers_c = std::vector<int>{1, 2, 3, 4, 5};
    auto numbers = std::vector<int>{1, 2, 3, 4, 5};

    for (auto& x : numbers) {
        // here `x` is a int reference
        x = 1;
        std::cout << x << std::endl;
        // vector becomes {1,1,1,1,1}
    }

    for (auto& x : numbers_c) {
        // here `x` is a const int reference
        std::cout << x << std::endl;
        // Can't change vector
    }
}