#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int fixedPoint;
		static const int fracBits;
	public:
		Fixed();
		Fixed(const int value);//It converts it to the corresponding fixed-point value
		Fixed(const float value);//It converts it to the corresponding fixed-point valu
		Fixed(const Fixed& other);
		Fixed &operator=(const Fixed &other);
		void operator<<(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;//converts the fixed-point value to a floating-point
		int toInt(void) const;//converts the fixed-point value to an int 
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);
#endif
