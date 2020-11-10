/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:28:56 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 17:44:51 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string w_type)
{
	type = w_type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string w_type)
{
	type = w_type;
}

const std::string &Weapon::getType()
{
	return(type);
}