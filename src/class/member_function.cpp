#include <iostream>
#include <string>

class satellite {
 public:
    satellite(int height, int speed, std::string const& name) {
        this->height_ = height;
        this->speed_ = speed;
        this->name_ = name;
    }

    auto get_name() const -> std::string const& {
        return this->name_;
    }

    auto set_name(std::string const& new_name) -> void {
        this->name_ = new_name;
    }

    auto calculate_distance(int time) const -> int {
        return time * this->speed_;
    }

 private:
    int height_;
    int speed_;
    std::string name_;
};

auto main() -> int {
    auto s = satellite{100, 50, "satellite1"};
    std::cout << s.get_name() << std::endl;
    // satellite1
    std::cout << s.calculate_distance(10) << std::endl;
    // 500
    s.set_name("satellite2");
    std::cout << s.get_name() << std::endl;
    // satellite2
}