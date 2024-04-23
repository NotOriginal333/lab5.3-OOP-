#include "B.h"
#include <stdexcept>


int main() {
    try {
        B b;
        A a;
        a.assign(b); 
    }
    catch (const std::exception& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }
    return 0;
}