#include <iostream>

auto swap(int* x, int* y) -> void {
    int temp = *x;
    *x = *y;
    *y = temp;
}

auto main() -> int {
    int x = 100;
    int y = 0;
    std::cout << "Before (" << x << ", " << y << ")\n";
    // Before (100, 0)

    swap(&x, &y);
    std::cout << "After (" << x << ", " << y << ")\n";
    // After (0, 100)

    return 0;
}