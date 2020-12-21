/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:06:18 by schene            #+#    #+#             */
/*   Updated: 2020/12/18 15:46:49 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <deque>
int main()
{
	std::cout << "---- subject main ----" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "---- test w/ 1000 numbers (i * 5) ----" << std::endl;
	Span sp1 = Span(1000);
	for (int i = 0; i < 1000; ++i)
	{
		try
		{
			sp1.addNumber(i * 5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	std::cout << std::endl << "---- test w/ 10000 numbers----" << std::endl;
	Span sp2 = Span(10000);

	std::list<int> lst;
	for (int i = 0; i < 5000; i++)
	{
		lst.push_back((i + 5645) * 3);
		lst.push_back((i - 36797) * 5);
	}	
	try
	{
		sp2.addIt(lst.begin(), lst.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;


	std::cout << std::endl << "---- test w/ 20000 numbers----" << std::endl;
	Span sp3 = Span(20000);

	std::list<int> lst2;
	for (int i = 0; i < 20000; i++)
		lst2.push_back((i + 265) * 6);
	try
	{
		sp3.addIt(lst2.begin(), lst2.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	return 0;
}