#include <unordered_set>
#include <iostream>
#include <set>
#include <string>

auto main() -> int {
    auto s_1 = std::set<std::string>();
    auto s_2 = std::unordered_set<std::string>();

    s_1.insert("mtrnsoc");
    s_1.insert("mtrnsoc");
    s_1.insert("mtrn4110");

    for (auto const& x : s_1) {
        std::cout << x << std::endl;
    }
    // mtrn4110
    // mtrnsoc
}