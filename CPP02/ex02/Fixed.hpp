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

		bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

		Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);
#endif
