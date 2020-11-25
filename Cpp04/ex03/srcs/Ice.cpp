/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:34:36 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:43:53 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	
}

Ice::Ice(Ice const & to_copy) : AMateria(to_copy)
{
	*this = to_copy;
}

Ice::~Ice()
{

}

Ice			&Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void 		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}