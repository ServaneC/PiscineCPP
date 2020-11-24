/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:46:01 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:26:03 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & to_copy) : Enemy(to_copy)
{
	*this = to_copy;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return *this;
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
