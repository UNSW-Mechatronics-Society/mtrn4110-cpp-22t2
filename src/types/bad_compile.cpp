#include <iostream>

int main() {
    float d = 1.0;
    int i = d; // Implicit type conversion from (double) -> (int);
    std::cout << i << std::endl;
    return 0;
}