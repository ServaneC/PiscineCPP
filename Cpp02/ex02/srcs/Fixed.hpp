/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:01:22 by schene            #+#    #+#             */
/*   Updated: 2020/11/14 15:58:47 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_fract_bits = 8;

	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& src);
		~Fixed();

		Fixed&	operator=(Fixed const &fix);
		bool	operator==(Fixed const &fix) const;
		bool	operator!=(Fixed const &fix) const;
		bool	operator>(Fixed const &fix) const;
		bool	operator<(Fixed const &fix) const;
		bool	operator>=(Fixed const &fix) const;
		bool	operator<=(Fixed const &fix) const;
		Fixed	operator+(Fixed const &fix) const;
		Fixed	operator-(Fixed const &fix) const;
		Fixed	operator*(Fixed const &fix) const;
		Fixed	operator/(Fixed const &fix) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed		&min(Fixed &fix1, Fixed &fix2);
		static const Fixed	&min(const Fixed &fix1, const Fixed &fix2);
		static Fixed		&max(Fixed &fix1, Fixed &fix2);
		static const Fixed	&max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream&	operator<<(std::ostream & o, Fixed const & fix);

#endif