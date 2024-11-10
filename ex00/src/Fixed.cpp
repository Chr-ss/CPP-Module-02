/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2024/11/10 14:55:54 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

// Constructor
Fixed::Fixed(void) : _value(0)
{
	std::cout << BLUE << "Default constructor called" << RESET <<std::endl;
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
		_value = other.getRawBits();
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