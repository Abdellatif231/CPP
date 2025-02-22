#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = value << fracBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = value * (1 << fracBits);
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
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPoint = raw;
}

int Fixed::toInt(void) const {
	return ((this->fixedPoint) >> fracBits);
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(this->fixedPoint) / (1 << fracBits));
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other) {
	stream << other.toFloat(); 
	// this fucking roundf() should be used on int wa9ilaa!!!!
	return stream;
}
