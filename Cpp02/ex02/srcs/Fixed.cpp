/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:56:14 by schene            #+#    #+#             */
/*   Updated: 2020/11/14 16:45:59 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	return;
}

Fixed::Fixed(const int i): _value(i << Fixed::_fract_bits) 
{
	return;
}

Fixed::Fixed(const float f): _value(roundf(f * (1 << Fixed::_fract_bits)))
{
	return;
}

Fixed::Fixed(const Fixed& src)
{
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed&	Fixed::operator=(Fixed const &fix)
{
	if (this != &fix)
		this->_value = fix.getRawBits();
	
	return *this;
}

bool	Fixed::operator==(Fixed const &fix) const
{
	return (this->_value == fix.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fix) const
{
	return (this->_value != fix.getRawBits());
}

bool	Fixed::operator>(Fixed const &fix) const
{
	return (this->_value > fix.getRawBits());
}

bool	Fixed::operator<(Fixed const &fix) const
{
	return (this->_value < fix.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fix) const
{
	return (this->_value >= fix.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fix) const
{
	return (this->_value <= fix.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &fix) const
{
	Fixed ret;

	ret._value = this->_value + fix.getRawBits();
	return ret;
}

Fixed	Fixed::operator-(Fixed const &fix) const
{
	Fixed ret;

	ret._value = this->_value - fix.getRawBits();
	return ret;
}

Fixed	Fixed::operator*(Fixed const &fix) const
{
	return this->toFloat() * fix.toFloat();
}

Fixed	Fixed::operator/(Fixed const &fix) const
{
	return this->toFloat() / fix.toFloat();
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_value--;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	float ret;
	ret =  this->_value / (float)(1 << this->_fract_bits);
	return ret;
}

int		Fixed::toInt( void ) const
{
	return this->_value >> this->_fract_bits;
}

Fixed	& Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1 < fix2)
		return (fix1);
	return (fix2);
}

const Fixed	& Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 < fix2)
		return (fix1);
	return (fix2);
}

Fixed	& Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1 > fix2)
		return (fix1);
	return (fix2);
}

const Fixed	& Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 > fix2)
		return (fix1);
	return (fix2);
}

std::ostream&	operator<<(std::ostream & o, Fixed const & fix)
{
	o << fix.toFloat();
	return o;
}