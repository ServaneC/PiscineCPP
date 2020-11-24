/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PoisonSpray.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:55:24 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 00:03:51 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PoisonSpray.hpp"

PoisonSpray::PoisonSpray() : AWeapon("Poison Spray", 2, 10)
{
	return ;
}

PoisonSpray::PoisonSpray(const PoisonSpray & to_copy) : AWeapon(to_copy)
{
	*this = to_copy;
	return ;
}

PoisonSpray::~PoisonSpray()
{
}

PoisonSpray	&	PoisonSpray::operator=(PoisonSpray const & rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

void			PoisonSpray::attack() const
{
	std::cout << MAG <<  "* pccchhhiiiiiiiiiiittttt pchiiiit*" << END << std::endl;
}