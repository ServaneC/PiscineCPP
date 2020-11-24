/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:03:03 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:27:13 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(const PowerFist & to_copy) : AWeapon(to_copy)
{
	*this = to_copy;
	return ;
}

PowerFist::~PowerFist()
{
	
}

PowerFist	&	PowerFist::operator=(PowerFist const & rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

void			PowerFist::attack() const
{
	std::cout << MAG << "* pschhh... SBAM! *" << END << std::endl;
}