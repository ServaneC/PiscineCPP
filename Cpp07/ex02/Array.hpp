/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:55:27 by schene            #+#    #+#             */
/*   Updated: 2020/12/14 11:29:40 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
	public:
		T		*array;
		Array() : _size(0), array(NULL) {}
		Array(unsigned int n) : _size(n), array(new T[n]) {}
		Array(Array &to_copy) : _size(to_copy.size()), array(new T[_size]) {
			for (unsigned int i = 0; i < _size; i++)
				array[i] = to_copy.array[i];
		}
		~Array() {
			delete [] array;
		}
		Array	&operator=(Array &rhs) {
			if (_size > 0)
				delete [] array;
			_size = rhs.size();
			array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				array[i] = rhs.array[i];
			return *this;	
		}
		class IndexOutOfRange : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Element out of limit");
			}
		};

		T		&operator[](unsigned int index) {
			if (index >= _size)
				throw IndexOutOfRange();
			return array[index];
		}

		int		size() const {
			return _size;
		}
};

#endif