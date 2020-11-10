/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:28:48 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 17:46:38 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string h_name)
{
	name = h_name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << ATTACK << name << " attacks with his " << weapon_b->getType() << ENDL;
}

void	HumanB::setWeapon(Weapon &h_weapon)
{
	this->weapon_b = &h_weapon;
}