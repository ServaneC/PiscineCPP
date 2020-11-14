/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:56:14 by schene            #+#    #+#             */
/*   Updated: 2020/11/13 21:35:34 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int i): _value(i << Fixed::_fract_bits) 
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float f): _value(roundf(f * (1 << Fixed::_fract_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(Fixed const &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		this->_value = fix.getRawBits();
	
	return *this;
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


std::ostream&	operator<<(std::ostream & o, Fixed const & fix)
{
	o << fix.toFloat();
	return o;
}