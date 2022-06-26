#include <iostream>

auto swap_value(int x, int y) -> void {
    auto const tmp = x;
    x = y;
    y = tmp;
}

auto swap_reference(int& x, int& y) -> void {
    auto const tmp = x;
    x = y;
    y = tmp;
}

auto main() -> int {
    auto i = 1;
    auto j = 2;
    std::cout << i << ' ' << j << '\n';
    // 1 2
    swap_reference(i, j);
    std::cout << i << ' ' << j << '\n';
    // 1 2 (not swapped)
}