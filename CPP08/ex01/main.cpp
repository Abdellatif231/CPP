#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>

int main() {
    // Test 1: Basic functionality
    std::cout << "=== Test 1: Basic Functionality ===" << std::endl;
    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test 2: Error handling
    std::cout << "\n=== Test 2: Error Handling ===" << std::endl;
    try {
        Span sp(1);
        sp.addNumber(42);
        sp.addNumber(43);
    } catch (const std::exception& e) {
        std::cout << "Expected error: " << e.what() << std::endl;
    }

    try {
        Span sp(1);
        std::cout << sp.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Expected error: " << e.what() << std::endl;
    }

    // Test 3: Large dataset (10,000 numbers)
    std::cout << "\n=== Test 3: 10,000 Numbers ===" << std::endl;
    try {
        Span sp(10000);
        std::vector<int> largeVec;
        for (int i = 0; i < 10000; ++i) {
            largeVec.push_back(i * 2);
        }
        
        sp.addNumbers(largeVec.begin(), largeVec.end());
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test 4: Iterator range with different container
    std::cout << "\n=== Test 4: Iterator Range ===" << std::endl;
    try {
        Span sp(10);
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(4);
        lst.push_back(7);
        lst.push_back(11);
        
        sp.addNumbers(lst.begin(), lst.end());
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test 5: Random numbers
    std::cout << "\n=== Test 5: Random Numbers ===" << std::endl;
    try {
        Span sp(1000);
        std::srand(std::time(0));
        for (int i = 0; i < 1000; ++i) {
            sp.addNumber(std::rand() % 10000);
        }
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
