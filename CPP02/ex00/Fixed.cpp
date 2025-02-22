#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Assingnment operator called" << std::endl;
	this->fixedPoint = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}
