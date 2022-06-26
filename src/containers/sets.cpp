#include <unordered_set>
#include <iostream>
#include <set>
#include <string>

auto main() -> int {
    auto set_2 = std::set<std::string>();
    auto set = std::unordered_set<std::string>();

    set.insert("mtrnsoc");
    set.insert("mtrnsoc");
    set.insert("mtrn4110");

    for (auto const& x : set) {
        std::cout << x << std::endl;
    }
    // mtrn4110
    // mtrnsoc
}