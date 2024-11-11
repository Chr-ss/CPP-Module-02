/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2024/11/11 15:54:36 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

// Constructor
Fixed::Fixed(void) : _value(0)
{
	// std::cout << BLUE << "Default constructor called" << RESET <<std::endl;
}
Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{
	// std::cout << BLUE << "Int constructor called" << RESET <<std::endl;
}
Fixed::Fixed(const float value) : _value(static_cast<int>(roundf(value * (1 << _fractionalBits))))
{
	// std::cout << BLUE << "Float constructor called" << RESET <<std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &toCopy)
{
	// std::cout << BRIGHT_BLUE << "Copy constructor called" << RESET <<std::endl;
	*this = toCopy;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed &other)
{
	// std::cout << CYAN << "Copy assignment operator called" << RESET <<std::endl;
	if (this != &other)
		_value = other._value;
	return (*this);
}

// Destructor
Fixed::~Fixed()
{
	// std::cout << RED << "Destructor called" << RESET <<std::endl;
}

// comparison operators
bool Fixed::operator>(const Fixed &other) const
{
	return (_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (_value != other._value);
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result(_value + other._value);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result(_value - other._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result(_value * other.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	if (other._value == 0)
	{
		std::cout << RED << "Devision by 0 invalid!!" << RESET << std::endl;
		return (result);
	}
	else
		result._value = _value / other.toFloat();
	return (result);
}

// str[increment_i(&i)]
// int increment_i(int *i)
// {
// 	int copy_i = i;
// 	*i += 1;
// 	return copy_i;
// }
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	_value += 1;
	return (temp);
}

Fixed& Fixed::operator++()
{
	_value += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_value -= 1;
	return (temp);
}

Fixed& Fixed::operator--()
{
	_value -= 1;
	return (*this);
}


// Getter
int Fixed::getRawBits(void) const
{
	// std::cout << ORANGE << "getRawBits member function called" << RESET <<std::endl;
	return (_value);
}

// Setter
void Fixed::setRawBits(int raw)
{
	// std::cout << YELLOW << "setRawBits member function called" << RESET <<std::endl;
	_value = raw;
}

int Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((static_cast<float>(_value) / (1 << _fractionalBits)));
}

// min / max member functions
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

// Operators
std::ostream& operator<<(std::ostream &outStream, const Fixed &out)
{
	outStream << out.toFloat();
	return (outStream);
}