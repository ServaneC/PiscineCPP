/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:01:22 by schene            #+#    #+#             */
/*   Updated: 2020/11/13 21:18:36 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_fract_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& src);
		~Fixed();
		Fixed&	operator=(Fixed const &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		

};

#endif