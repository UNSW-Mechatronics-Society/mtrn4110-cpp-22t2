#include <iostream>
#include <vector>

int main() {
    // Creates a vector of integers using an initialiser list
    std::vector<int> a = {0, 1, 2, 3, 4};

    // Creates a vector of length 3, with all value defaulted at 2. Using constructor
    std::vector<int> b(3, 2);

    // Vector with {1, 2} as elements. Using constructor
    std::vector<int> c{1, 2};

    // Creating a copy. Using constructor
    std::vector<int> d = a;

    // Assignment {2, 2, 2}
    c = b;

    return 0;
}