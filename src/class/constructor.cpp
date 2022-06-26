#include <iostream>
#include <string>

class satellite {
 public:
    satellite(int height, int speed, std::string const& name);

 private:
    int height_;
    int speed_;
    std::string name_;
};

satellite::satellite(int height, int speed, std::string const& name) {
    height_ = height;
    speed_ = speed;
    name_ = name;
}

auto main() -> int {
    auto s = satellite{10000, 500, "satellite1"};
}