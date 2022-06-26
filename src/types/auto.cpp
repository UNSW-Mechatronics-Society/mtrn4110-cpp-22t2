#include <iostream>
#include <string>
#include <vector>

int main(void) {
    // int
    auto a = 1;

    // unsigned long
    auto b = 1ul;

    // double
    auto c = 1.5;

    // float
    auto d = 1.5f;

    // String
    auto string_1 = std::string("mtrn4110");

    // vector of strings (dynamic array of strings)
    auto v = std::vector<std::string>{"hello", "mtrn4110"};

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << string_1 << std::endl;
}