/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:07:26 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:08:34 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	
}

AMateria::AMateria(AMateria const & to_copy)
{
	*this = to_copy;
}

AMateria::~AMateria()
{
	
}

AMateria			&AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_xp = rhs.getXP();
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

unsigned int 		AMateria::getXP() const
{
	return this->_xp;
} 

void 		AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}