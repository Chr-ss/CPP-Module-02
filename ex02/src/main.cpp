/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/14 16:55:43 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>
int main(void)
{
	{
		std::cout << GREEN << "TEST1 (subject):" << RESET << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << GREEN << "\nTEST2:" << RESET << std::endl;
		Fixed a;
		std::cout << "Base values:\na:\t\t" << a << std::endl;
		Fixed a1( 5.05f);
		std::cout << "a1:\t\t" << a1 << std::endl;
		Fixed a2( 2 );
		std::cout << "a2:\t\t" << a2 << std::endl;
		Fixed const b( a1 * a2 );
		std::cout << "b:\t\t" << b << std::endl;

		std::cout << "\nIterating a\na:\t\t" << a << std::endl;
		std::cout << "++a:\t\t" << ++a << std::endl;
		std::cout << "a:\t\t" << a << std::endl;
		std::cout << "a++:\t\t" << a++ << std::endl;
		std::cout << "a:\t\t" << a << std::endl;

		std::cout << "\nmin / max test\na:\t\t" << a << std::endl;
		std::cout << "b:\t\t" << b << std::endl;
		std::cout << "max(a, b)\t" << Fixed::max( a, b ) << std::endl;
		std::cout << "min(a, b)\t" << Fixed::min( a, b ) << std::endl;
	}
	{
		std::cout << GREEN << "\nTEST3:" << RESET << std::endl;
		Fixed a;
		Fixed b(10.1016f);
		Fixed c(0.00390625f);

		std::cout << "a:\t\t" << a << std::endl;
		std::cout << "b:\t\t" << b << std::endl;
		std::cout << "c:\t\t" << c << std::endl;
		// std::cout << c << std::endl;
		// std::cout << c << std::endl;

		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
		Fixed d = b + c;
		std::cout << "b + c\t\t" << d << std::endl;

		Fixed e = b - c;
		std::cout << "b - c\t\t" << e << std::endl;

		Fixed f = b * c;
		std::cout << "b * c\t\t" << f << std::endl;

		Fixed g = b / c;
		std::cout << "b / c\t\t" << g << std::endl;
	}
	{
		std::cout << GREEN << "\nTEST4 (all):" << RESET << std::endl;
		Fixed a;
		Fixed b(1);
		Fixed c(0.00390625f);
		Fixed d(10.1016f);
		Fixed e(100);

		std::cout << GRAY << "a:\t\t" << a << std::endl;
		std::cout << "b:\t\t" << b << std::endl;
		std::cout << "c:\t\t" << c << std::endl;
		std::cout << "d:\t\t" << c << std::endl;
		std::cout << "e:\t\t" << c << "\n" << RESET << std::endl;

	}
	return (0);
}