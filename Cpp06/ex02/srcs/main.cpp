/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:08:40 by schene            #+#    #+#             */
/*   Updated: 2020/12/07 23:22:36 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*gen_A(void)
{
	return new A;
}

Base	*gen_B(void)
{
	return new B;
}

Base	*gen_C(void)
{
	return new C;
}

Base * generate(void)
{
	Base *(*base_ptr[3])(void) = {gen_A, gen_B, gen_C};
	int alea = std::rand() % 3;

	return base_ptr[alea]();	
}

void	identify_from_pointer(Base * p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify_from_reference( Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e){
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e){
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e){
	}
}

int main()
{
	std::srand(std::time(NULL));
	Base *base = generate();
	std::cout << "from ptr : ";
	identify_from_pointer(base);
	std::cout << "from ref : ";
	identify_from_reference(*base);
	delete base;
	return 0;
}
