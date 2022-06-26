#include <iostream>
#include <stack>
#include <string>

auto main() -> int {
    auto stack = std::stack<std::string>();
    stack.push("first in");
    stack.push("second in");
    stack.push("third in");

    while (!stack.empty()) {
        // Get the top of the stack
        auto const& item = stack.top();
        std::cout << item << std::endl;
        // Pop out top element
        stack.pop();
    }
    // third in
    // second in
    // first in
}