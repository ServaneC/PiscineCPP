/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:52 by schene            #+#    #+#             */
/*   Updated: 2020/12/18 15:13:11 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _N(N)
{

}

Span::Span(Span const & to_copy) : _N(to_copy._N)
{
	this->_numbers = to_copy._numbers;
}

Span::~Span()
{

}

Span const &Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_numbers.clear();
	this->_numbers = rhs._numbers;
	return (*this);
}

const char* Span::NoMoreSpaceForNumber::what() const throw()
{
	return ("There is no more space for another number !");
}

const char* Span::NotEnoughNumbers::what() const throw()
{
	return ("At least two numbers are needed to find a span !");
}

void		Span::addNumber(int to_add)
{
	if (this->_numbers.size() == _N)
		throw Span::NoMoreSpaceForNumber();
	else
		this->_numbers.push_back(to_add);
}

int			Span::shortestSpan(void)
{
	if (this->_numbers.size() < 2)
		throw Span::NotEnoughNumbers();

	int short_span = -1;
	this->_numbers.sort();
	std::list<int>::const_iterator ite = this->_numbers.end();
	for (std::list<int>::iterator pos = this->_numbers.begin(); pos != ite; pos++)
	{
		std::list<int>::iterator it = pos;
		++it;
		for (; it != ite; ++it)
		{
			int span = *it - *pos;
			if (short_span == -1 || short_span > span)
				short_span = span;
		}
	}
	return (short_span);
}

int			Span::longestSpan(void)
{
	if (this->_numbers.size() < 2)
		throw Span::NotEnoughNumbers();

	int min = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	int max = *std::max_element(this->_numbers.begin(), this->_numbers.end());
	return (max - min);
} 