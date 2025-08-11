#include "Array.hpp"

int main() {
    // Test default constructor
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    // Test parameterized constructor
    Array<int> arr(5);
    std::cout << "Array size: " << arr.size() << std::endl;

    // Test assignment and modification
    arr[0] = 42;
    std::cout << "arr[0] = " << arr[0] << std::endl;

    // Test copy constructor (deep copy)
    Array<int> arrCopy = arr;
    arrCopy[0] = 100;
    std::cout << "arr[0] after copy: " << arr[0] << std::endl;

    // Test out-of-bounds access
    try {
        std::cout << arr[10] << std::endl; // Throws exception
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
