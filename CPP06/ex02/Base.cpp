#include "Base.hpp"

Base::~Base() {
    std::cout << "Destruction called" << std::endl;
}

Base * generate(void) {
    Base* ptr = NULL;

    srand(time(NULL));
    int choice = rand() % 3;

    if (choice == 0)
        ptr = new A();
    else if (choice == 1)
        ptr = new B();
    else
        ptr = new C();

    return ptr;
}

void identify(Base* p) {
    
    A *a = dynamic_cast<A*>(p);
    if (a) {
        std::cout << "p is type: A" <<std::endl;
        return;
    }

    B *b = dynamic_cast<B*>(p);
    if (b) {
        std::cout << "p is type: B" << std::endl;
        return;
    }

    C *c = dynamic_cast<C*>(p);
    if (c) {
        std::cout << "p is type: C" << std::endl;
        return;
    }
}

void identify(Base& p) {
    
    try {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "p is type: A" << std::endl;
    } catch (...) {};
    try {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "p is type: B" << std::endl;
    } catch (...) {};
    try {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "p is type: C" << std::endl;
    } catch (...) {};
}
