/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:19:51 by schene            #+#    #+#             */
/*   Updated: 2020/12/18 15:38:32 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP


# include <iostream>
# include <algorithm>
# include <list>

class Span
{
	private:
		Span();
		unsigned int 	_N;
		std::list<int>	_numbers;

	public:
		Span(unsigned int N);
		Span(Span const & to_copy);
		~Span();

		Span const &operator=(Span const & rhs);
		class NoMoreSpaceForNumber : public std::exception
		{
			virtual const char* what() const throw();
		};
		class NotEnoughNumbers : public std::exception
		{
			virtual const char* what() const throw();
		};

		void		addNumber(int to_add);
		
		template <typename IteratorT>
		void		addIt(IteratorT begin, IteratorT end)
		{
			for (IteratorT it = begin; it != end; it++)
			{
				if (this->_numbers.size() == _N)	
					throw Span::NoMoreSpaceForNumber();
				this->_numbers.push_back(*it);
			}
		}
		int			shortestSpan(void);
		int			longestSpan(void);
};

#endif