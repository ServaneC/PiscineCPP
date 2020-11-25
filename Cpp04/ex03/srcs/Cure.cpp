/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:14:49 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:42:29 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	
}

Cure::Cure(Cure const & to_copy) : AMateria(to_copy)
{
	*this = to_copy;
}

Cure::~Cure()
{

}

Cure			&Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void 		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() <<  "’s wounds *" << std::endl;
}