/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:55:28 by schene            #+#    #+#             */
/*   Updated: 2020/11/14 16:50:22 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed b(2);
	Fixed c(3.42f);
	Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << "\t";
	std::cout << "c = " << c << "\t";
	std::cout << "d = " << d << std::endl << std::endl;
	
	// test for the '<' operator
	std::cout << "(a < b) -> " << (a < b) << std::endl;
	std::cout << "(d < c) -> " << (d < c) << std::endl << std::endl;

	// test for the '>' operator
	std::cout << "(a > b) -> " << (a > b) << std::endl;
	std::cout << "(d > c) -> " << (d > c) << std::endl << std::endl;

	a = b;
	std::cout << "a = b" << std::endl;

	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << "\t";
	std::cout << "c = " << c << "\t";
	std::cout << "d = " << d << std::endl << std::endl;

	// test for the '<=' operator
	std::cout << "(a <= b) -> " << (a <= b) << std::endl;
	std::cout << "(d <= c) -> " << (d <= c) << std::endl << std::endl;

	// test for the '>=' operator
	std::cout << "(a >= b) -> " << (a >= b) << std::endl;
	std::cout << "(d >= c) -> " << (d >= c) << std::endl << std::endl;

	// test for the '!=' operator
	std::cout << "(a != b) -> " << (a != b) << std::endl;
	std::cout << "(d != c) -> " << (d != c) << std::endl << std::endl;

	// test for the '!=' operator
	std::cout << "(a == b) -> " << (a == b) << std::endl;
	std::cout << "(d == c) -> " << (d == c) << std::endl << std::endl;
	
	a = b + c;
	std::cout << "a = b + c" << std::endl;

	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << "\t";
	std::cout << "c = " << c << "\t";
	std::cout << "d = " << d << std::endl << std::endl;

	c = c - b;
	std::cout << "d = d - b" << std::endl;

	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << "\t";
	std::cout << "c = " << c << "\t";
	std::cout << "d = " << d << std::endl << std::endl;

	c = b * d;
	std::cout << "c = b * d" << std::endl;

	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << "\t";
	std::cout << "c = " << c << "\t";
	std::cout << "d = " << d << std::endl << std::endl;

	c = c / b;
	std::cout << "c = c / b" << std::endl;

	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << "\t";
	std::cout << "c = " << c << "\t";
	std::cout << "d = " << d << std::endl << std::endl;

	std::cout << "min(a, b) -> " << Fixed::min(a, b) << std::endl;
	std::cout << "min(c, d) -> " << Fixed::min(c, d) << std::endl;
	std::cout << "min(c, a) -> " << Fixed::min(c, a) << std::endl << std::endl;
	std::cout << "max(a, b) -> " << Fixed::max(a, b) << std::endl;
	std::cout << "max(c, d) -> " << Fixed::max(c, d) << std::endl;
	std::cout << "max(a, c) -> " << Fixed::max(a, c) << std::endl << std::endl;

	a = Fixed();
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	return 0;
}