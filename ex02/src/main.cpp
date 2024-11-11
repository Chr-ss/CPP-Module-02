/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/11 15:56:50 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>
int main(void)
{
	{
		std::cout << GREEN << "TEST1:" << RESET << std::endl;
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

		std::cout << "\nmin / max test\nb:\t\t" << b << std::endl;
		std::cout << "max(a, b)\t" << Fixed::max( a, b ) << std::endl;
		std::cout << "min(a, b)\t" << Fixed::min( a, b ) << std::endl;
	}
	{
		std::cout << GREEN << "\nTEST3:" << RESET << std::endl;
		Fixed a;
		Fixed b(10.1016f);
		Fixed c(0.00390625f);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		// std::cout << c << std::endl;
		// std::cout << c << std::endl;

		Fixed d = b + c;
		std::cout << d << std::endl;

		Fixed e = b - c;
		std::cout << e << std::endl;

		Fixed f = b * c;
		std::cout << f << std::endl;

		Fixed g = b / c;
		std::cout << g << std::endl;
	}
	return (0);
}