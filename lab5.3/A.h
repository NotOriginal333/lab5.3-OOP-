#pragma once
#include <iostream>
class A {
public:
    virtual ~A() {}
    virtual void print() const;
    virtual void assign(const A& other);
};