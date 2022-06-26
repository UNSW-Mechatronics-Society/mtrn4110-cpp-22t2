#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Option 1: Static cast numbers.size() to an int
    for (int i = 0; i < static_cast<int>(numbers.size()); ++i) {
        std::cout << numbers.at(i) << std::endl;
    }

    // Option 2: Declare our `i` variable as an unsigned long
    for (unsigned long i = 0; i < numbers.size(); ++i) {
        std::cout << numbers.at(i) << std::endl;
    }
}