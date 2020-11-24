/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:49:14 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 13:02:24 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & to_copy) : Enemy(to_copy)
{
	*this = to_copy;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout <<  "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}