/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:59:35 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 09:19:13 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	_name(name), _dmg(damage), _ap_cost(apcost)
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
		this->_name = rhs._name;
		this->_ap_cost = rhs._ap_cost;
		this->_dmg = rhs._dmg;
	}
	return *this;
}

std::string		AWeapon::getName() const
{
	return this->_name;
}

int 			AWeapon::getAPCost() const
{
	return this->_ap_cost;
}

int				AWeapon::getDamage() const
{
	return this->_dmg;
}
