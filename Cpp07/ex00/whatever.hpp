/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:01:36 by schene            #+#    #+#             */
/*   Updated: 2020/12/10 16:21:04 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b)
{
	T tmp = a;

	a = b;
	b = tmp;
	return ;
}

template <typename T>
T	const &min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template <typename T>
T	const &max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

#endif
