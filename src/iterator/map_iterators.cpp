#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

auto main() -> int {
    // adjacency list
    // int: key
    // list of int: value
    auto map = std::unordered_map<int, std::vector<int>>();
    map.emplace(1, std::vector<int>{2, 3, 4});
    map.emplace(2, std::vector<int>{1, 3});
    map.emplace(3, std::vector<int>{1, 2, 4});
    map.emplace(4, std::vector<int>{1, 3});

    // I am at node 3, I want to find where I can move

    auto res = map.find(3);
    // Returned a type of std::unordered_map<int, std::vector<int>>::iterator
    if (res != map.end()) {
        std::cout << "Found a result" << std::endl;
        // I have found a result
        auto key = (*res).first; // int
        auto& value = res->second; // std::vector<int>&
        for (auto x : value) {
            std::cout << x << std::endl;
        }
        (void)key; // to 'use' variable
    }
    else {
        // Didn't find that value in the map
    }
    // Found a result
    // 1
    // 2
    // 4
}
