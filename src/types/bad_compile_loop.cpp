#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers.at(i) << std::endl;
    }
}