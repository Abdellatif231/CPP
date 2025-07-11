#include "Base.hpp"

int main() {
    Base* ptr = generate();

    identify(ptr);   // test pointer version
    identify(*ptr);  // test reference version

    delete ptr;      // don't forget cleanup
    return 0;
}

