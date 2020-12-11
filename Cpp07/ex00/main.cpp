/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:04:14 by schene            #+#    #+#             */
/*   Updated: 2020/12/11 14:11:51 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void )
{
	std::cout << std::endl << "------------- INT -------------" << std::endl<< std::endl;
	
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap( a, b )" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << std::endl << "------------- STRING -------------"  << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "swap( c, d )" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "------------- CHAR -------------"  << std::endl << std::endl;
	
	char char_a = 'a';
	char char_b = 'b';
	
	std::cout << "char_a = " << char_a << ", char_b = " << char_b << std::endl;
	::swap( char_a, char_b );
	std::cout << "swap( char_a, char_b )" << std::endl;
	std::cout << "char_a = " << char_a << ", char_b = " << char_b << std::endl;
	std::cout << "min( char_a, char_b ) = " << ::min( char_a, char_b ) << std::endl;
	std::cout << "max( char_a, char_b ) = " << ::max( char_a, char_b ) << std::endl;

	std::cout << std::endl << "------------- FLOAT -------------"  << std::endl << std::endl;
	
	float float_a = 0.42f;
	float float_b = -0.21f;
	
	std::cout << "float_a = " << float_a << ", float_b = " << float_b << std::endl;
	::swap( float_a, float_b );
	std::cout << "swap( float_a, float_b )" << std::endl;
	std::cout << "float_a = " << float_a << ", float_b = " << float_b << std::endl;
	std::cout << "min( float_a, float_b ) = " << ::min( float_a, float_b ) << std::endl;
	std::cout << "max( float_a, float_b ) = " << ::max( float_a, float_b ) << std::endl;
	return 0;
}
