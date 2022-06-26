#include <iostream>
#include <queue>
#include <string>

auto main() -> int {
    auto queue = std::queue<std::string>();
    queue.push("first in queue");
    queue.push("second in queue");

    while (!queue.empty()) {
        // Get the first element in the queue
        auto const& item = queue.front();
        std::cout << item << std::endl;
        // Pop the element out of the queue
        queue.pop();
    }
    // first in queue
    // second in queue
}