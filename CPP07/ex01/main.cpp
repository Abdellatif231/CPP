#include "iter.hpp"
#include <string>

template <typename T>
void print(const T& x) {
    std::cout << x << std::endl;
}

template <typename T>
void doubleVal(T& x) {
    x = x + x;
}

int main() {
    std::cout << "=== Integers ===" << std::endl;
    int a[] = {1, 2, 3, 4};
    iter(a, 4, &print<int>);
    iter(a, 4, &doubleVal<int>);
    iter(a, 4, &print<int>);

    std::cout << "\n=== Const Strings ===" << std::endl;
    const std::string str[] = {"Zoro", "Luffy", "Nami"};
    iter(str, 3, &print<std::string>);

    std::cout << "\n=== Doubles ===" << std::endl;
    double d[] = {1.1, 2.2, 3.3};
    iter(d, 3, &print<double>);
    iter(d, 3, &doubleVal<double>);
    iter(d, 3, &print<double>);

    return 0;
}
