#include <unordered_map>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

auto main() -> int {
    // Maps a int to a vector of ints
    // Actually stores the key, value pairs in a std::pair
    auto map_2 = std::map<int, std::vector<int>>();
    auto map = std::unordered_map<int, std::vector<int>>();

    // Using std::unordered_map::insert
    // You have to insert std::pairs of the same type
    auto pair_to_add = std::make_pair<int, std::vector<int>>(1, std::vector<int>{2, 3, 4});
    map.insert(pair_to_add);

    // Using std::unordered_map::emplace
    // emplace takes in 2 arguments and makes the pair for you when inserting
    map.emplace(3, std::vector<int>{5, 7, 8, 10});
}