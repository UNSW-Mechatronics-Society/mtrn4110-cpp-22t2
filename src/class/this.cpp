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
    this->height_ = height;
    this->speed_ = speed;
    this->name_ = name;
}