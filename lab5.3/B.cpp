#include "B.h"

void B::print() const {
    std::cout << "B" << std::endl;
}

void B::assign(const A& other) {
    if (typeid(*this) != typeid(other)) {
        throw std::invalid_argument("Assignment of incompatible types");
    }
}