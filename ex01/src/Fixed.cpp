/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2024/11/10 16:58:44 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

// Constructor
Fixed::Fixed(void) : _value(0)
{
	std::cout << BLUE << "Default constructor called" << RESET <<std::endl;
}
Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{
	std::cout << BLUE << "Int constructor called" << RESET <<std::endl;
}
Fixed::Fixed(const float value) : _value(static_cast<int>(roundf(value * (1 << _fractionalBits))))
{
	std::cout << BLUE << "Float constructor called" << RESET <<std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << BRIGHT_BLUE << "Copy constructor called" << RESET <<std::endl;
	*this = toCopy;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << CYAN << "Copy assignment operator called" << RESET <<std::endl;
	if (this != &other)
		_value = other._value;
	return (*this);
}

// Destructor
Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET <<std::endl;
}

// Getter
int Fixed::getRawBits(void) const
{
	std::cout << ORANGE << "getRawBits member function called" << RESET <<std::endl;
	return (_value);
}

// Setter
void Fixed::setRawBits(int raw)
{
	std::cout << YELLOW << "setRawBits member function called" << RESET <<std::endl;
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

// Operators
std::ostream& operator<<(std::ostream &outStream, const Fixed &out)
{
	outStream << out.toFloat();
	return (outStream);
}