/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:28:43 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 17:19:32 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string h_name, Weapon &h_weapon) : weapon_a(h_weapon)
{
	name = h_name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << ATTACK << name << " attacks with his " << weapon_a.getType() << ENDL;
}
