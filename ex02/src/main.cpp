/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/20 12:53:48 by christian.r   ########   odam.nl         */
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
	// {
	// 	std::cout << GREEN << "\nTEST2:" << RESET << std::endl;
	// 	Fixed a;
	// 	std::cout << "Base values:\na:\t\t" << a << std::endl;
	// 	Fixed a1( 5.05f);
	// 	std::cout << "a1:\t\t" << a1 << std::endl;
	// 	Fixed a2( 2 );
	// 	std::cout << "a2:\t\t" << a2 << std::endl;
	// 	Fixed const b( a1 * a2 );
	// 	std::cout << "b:\t\t" << b << std::endl;

	// 	std::cout << "\nIterating a\na:\t\t" << a << std::endl;
	// 	std::cout << "++a:\t\t" << ++a << std::endl;
	// 	std::cout << "a:\t\t" << a << std::endl;
	// 	std::cout << "a++:\t\t" << a++ << std::endl;
	// 	std::cout << "a:\t\t" << a << std::endl;

	// 	std::cout << "\nmin / max test\na:\t\t" << a << std::endl;
	// 	std::cout << "b:\t\t" << b << std::endl;
	// 	std::cout << "max(a, b)\t" << Fixed::max( a, b ) << std::endl;
	// 	std::cout << "min(a, b)\t" << Fixed::min( a, b ) << std::endl;
	// }
	// {
	// 	std::cout << GREEN << "\nTEST3:" << RESET << std::endl;
	// 	Fixed a;
	// 	Fixed b(10.1016f);
	// 	Fixed c(0.00390625f);

	// 	std::cout << "a:\t\t" << a << std::endl;
	// 	std::cout << "b:\t\t" << b << std::endl;
	// 	std::cout << "c:\t\t" << c << std::endl;
		
	// 	Fixed d = b + c;
	// 	std::cout << "\nb + c\t\t" << d << std::endl;

	// 	Fixed e = b - c;
	// 	std::cout << "b - c\t\t" << e << std::endl;

	// 	Fixed f = b * c;
	// 	std::cout << "b * c\t\t" << f << std::endl;

	// 	Fixed g = b / c;
	// 	std::cout << "b / c\t\t" << g << std::endl;
	// }
	{
		std::cout << GREEN << "\nTEST4 (all):" << RESET << std::endl;
		Fixed a;
		Fixed b(2);
		Fixed c(0.00390625f);
		Fixed d(10.1016f);
		Fixed e(100);

		std::cout << GRAY << "a:\t\t" << a << std::endl;
		std::cout << "b:\t\t" << b << std::endl;
		std::cout << "c:\t\t" << c << std::endl;
		std::cout << "d:\t\t" << d << std::endl;
		std::cout << "e:\t\t" << e << "\n" << RESET << std::endl;


		std::cout << BLUE << "\nThe 4 arithmetic operators: +, -, *, and /." << RESET << std::endl;
		std::cout << "e + b\t\t" << e + b << std::endl;
		std::cout << "e - b\t\t" << e - b << std::endl;
		std::cout << "e * b\t\t" << e * b << std::endl;
		std::cout << "e / b\t\t" << e / b << std::endl;

		std::cout << BLUE << "\nThe 6 comparison operators: >, <, >=, <=, == and !=." << RESET << std::endl;
		std::cout << "e > b\t\t" << (e > b) << std::endl;
		std::cout << "e < b\t\t" << (e < b) << std::endl;
		std::cout << "e >= b\t\t" << (e >= b) << std::endl;
		std::cout << "e <= b\t\t" << (e <= b) << std::endl;
		std::cout << "e == b\t\t" << (e == b) << std::endl;
		std::cout << "e != b\t\t" << (e != b) << std::endl;

		std::cout << BLUE << "\nThe 4 increment/decrement (pre-increment and post-increment, pre-decrement" << RESET << std::endl;
		std::cout << BLUE << "and post-decrement) operators, that will increase or decrease the fixed-point " << RESET << std::endl;
		std::cout << BLUE << "value from the smallest representable ϵ such as 1 + ϵ > 1." << RESET << std::endl;
		std::cout << "a:\t\t" << a << std::endl;
		std::cout << "++a:\t\t" << ++a << std::endl;
		std::cout << "a:\t\t" << a << std::endl;
		std::cout << "a++:\t\t" << a++ << std::endl;
		std::cout << "a:\t\t" << a << std::endl;
		std::cout << "a++:\t\t" << a++ << std::endl;
		std::cout << "a++:\t\t" << a++ << std::endl;
		std::cout << "a++:\t\t" << a++ << std::endl;
		std::cout << "a:\t\t" << a << std::endl;

		std::cout << "\nb:\t\t" << b << std::endl;
		std::cout << "++b:\t\t" << ++b << std::endl;
		std::cout << "b:\t\t" << b << std::endl;
		std::cout << "b++:\t\t" << b++ << std::endl;
		std::cout << "b:\t\t" << b << std::endl;
		std::cout << "b++:\t\t" << b++ << std::endl;
		std::cout << "b++:\t\t" << b++ << std::endl;
		std::cout << "b++:\t\t" << b++ << std::endl;
		std::cout << "b:\t\t" << b << std::endl;

		std::cout << "\nc:\t\t" << c << std::endl;
		std::cout << "--c:\t\t" << --c << std::endl;
		std::cout << "c:\t\t" << c << std::endl;
		std::cout << "c--:\t\t" << c-- << std::endl;
		std::cout << "c:\t\t" << c << std::endl;
		std::cout << "c--:\t\t" << c-- << std::endl;
		std::cout << "c--:\t\t" << c-- << std::endl;
		std::cout << "c--:\t\t" << c-- << std::endl;
		std::cout << "c:\t\t" << c << std::endl;

		std::cout << "\nd:\t\t" << d << std::endl;
		std::cout << "--d:\t\t" << --d << std::endl;
		std::cout << "d:\t\t" << d << std::endl;
		std::cout << "d--:\t\t" << d-- << std::endl;
		std::cout << "d:\t\t" << d << std::endl;
		std::cout << "d--:\t\t" << d-- << std::endl;
		std::cout << "d--:\t\t" << d-- << std::endl;
		std::cout << "d--:\t\t" << d-- << std::endl;
		std::cout << "d:\t\t" << d << std::endl;

		std::cout << BLUE << "\nAdd these four public overloaded member functions to your class: (min/max)" << RESET << std::endl;
		std::cout << "a:\t" << a << "\tb:\t" << b << std::endl;
		std::cout << "max(a, b)\t" << Fixed::max( a, b ) << std::endl;
		std::cout << "min(a, b)\t" << Fixed::min( a, b ) << std::endl;
		std::cout << "c:\t" << c << "\td:\t" << d << std::endl;
		std::cout << "max(c, d)\t" << Fixed::max( c, d ) << std::endl;
		std::cout << "min(c, d)\t" << Fixed::min( c, d ) << std::endl;

		const Fixed b_const(2);
		const Fixed e_const(100);
		std::cout << "e_const:\t" << e_const << "\tb_const:\t" << b_const << std::endl;
		std::cout << "max(e_const, b_const)\t" << Fixed::max( e_const, b_const ) << std::endl;
		std::cout << "min(e_const, b_const)\t" << Fixed::min( e_const, b_const ) << std::endl;
		
	}
	return (0);
}