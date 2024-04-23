#pragma once
#include "A.h"
class B : public A {
public:
    void print() const override;
    void assign(const A& other) override;
};
