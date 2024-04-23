#include "A.h"

void A::print() const {
    std::cout << "A" << std::endl;
}

void A::assign(const A& other) {
    if (typeid(*this) != typeid(other)) {
        throw std::invalid_argument("Assignment of incompatible types");
    }
}