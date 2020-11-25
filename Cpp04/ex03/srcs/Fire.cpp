/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:34:36 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:43:53 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire() : AMateria("fire")
{
	
}

Fire::Fire(Fire const & to_copy) : AMateria(to_copy)
{
	*this = to_copy;
}

Fire::~Fire()
{

}

Fire			&Fire::operator=(Fire const & rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

AMateria*	Fire::clone() const
{
	return new Fire(*this);
}

void 		Fire::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heat up " << target.getName() <<  " with fire *" << std::endl;
}