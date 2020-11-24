/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:59:35 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:14:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	name(name), dmg(damage), ap_cost(apcost)
{
	return;
}

AWeapon::AWeapon(const AWeapon & to_copy)
{
	*this = to_copy;
}

AWeapon::~AWeapon()
{

}

AWeapon	&		AWeapon::operator=(AWeapon const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->ap_cost = rhs.ap_cost;
		this->dmg = rhs.dmg;
	}
	return *this;
}

std::string		AWeapon::getName() const
{
	return this->name;
}

int 			AWeapon::getAPCost() const
{
	return this->ap_cost;
}

int				AWeapon::getDamage() const
{
	return this->dmg;
}
