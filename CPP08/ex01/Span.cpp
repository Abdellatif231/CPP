#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {
	std::cout << "Default constructor called." << std::endl;
}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers) {
	std::cout << "Copy constructor called." << std::endl;
}

Span& Span::operator=(const Span& other) {
	std::cout << "Assignment operator called" << std::endl;
    if (this != &other) {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int number) {
    if (_numbers.size() >= _maxSize) {
        throw std::runtime_error("Cannot add number: Span is full");
    }
    _numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2) {
        throw std::runtime_error("Cannot find span: not enough numbers");
    }
    
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    
    int minSpan = INT_MAX;
    for (size_t i = 1; i < sorted.size(); ++i) {
        int currentSpan = sorted[i] - sorted[i - 1];
        if (currentSpan < minSpan) {
            minSpan = currentSpan;
        }
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2) {
        throw std::runtime_error("Cannot find span: not enough numbers");
    }
    
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    return sorted.back() - sorted.front();
}
