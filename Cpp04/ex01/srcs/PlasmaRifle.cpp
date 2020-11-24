/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:30:42 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:14:50 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & to_copy) : AWeapon(to_copy)
{
	*this = to_copy;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle	&	PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

void			PlasmaRifle::attack() const
{
	std::cout << MAG <<  "* piouuu piouuu piouuu *" << END << std::endl;
}
