/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:04:14 by schene            #+#    #+#             */
/*   Updated: 2020/12/11 09:50:54 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

// int main()
// {
// 	int int_a = 42;
// 	int int_b = 21;

// 	char char_a = 'a';
// 	char char_b = 'b';

// 	std::cout << "a = " << int_a << " b = " << int_b << std::endl;
// 	swap<int>(int_a, int_b);
// 	std::cout << "a = " << int_a << " b = " << int_b << std::endl;
// 	std::cout << "min = " << min<int>(int_a, int_b) << std::endl;
// 	std::cout << "max = " << max<int>(int_a, int_b) << std::endl;

// 	std::cout << "a = " << char_a << " b = " << char_b << std::endl;
// 	swap<char>(char_a, char_b);
// 	std::cout << "a = " << char_a << " b = " << char_b << std::endl;
// 	std::cout << "min = " << min<int>(char_a, char_b) << std::endl;
// 	std::cout << "max = " << max<int>(char_a, char_b) << std::endl;
// }

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
