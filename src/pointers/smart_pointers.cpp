#include <iostream>
#include <memory>
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

auto make_new_satellite() -> std::shared_ptr<satellite> {
    return std::make_shared<satellite>(satellite{100, 50, "satellite new"});
}

auto main() -> int {
    auto satellite_new = make_new_satellite();
    // Since satellite_new is now a 'pointer', we need to deference in order to access the members
    std::cout << (*satellite_new).get_name() << std::endl;
    std::cout << satellite_new->get_name() << std::endl;
}