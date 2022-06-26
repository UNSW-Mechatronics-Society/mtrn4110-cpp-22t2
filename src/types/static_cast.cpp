#include <iostream>

int main() {
    float d = 1.0;
    int i = static_cast<int>(d); // explicit type conversion from (float) -> (int);
    std::cout << i << std::endl;
    return 0;
}