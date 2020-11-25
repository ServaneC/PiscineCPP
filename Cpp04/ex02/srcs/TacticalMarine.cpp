/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:39:21 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 12:14:22 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout <<  GREEN << "Tactical Marine ready for battle!" << END << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & to_copy)
{
	(void)to_copy;
	std::cout <<  GREEN << "Tactical Marine ready for battle!" << END << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << RED <<  "Aaargh..." << END << std::endl;
}


TacticalMarine	&TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return *this;
}

ISpaceMarine* 	TacticalMarine::clone() const
{
	TacticalMarine *clone = new TacticalMarine(*this);
	
	return clone;
}

void 			TacticalMarine::battleCry() const
{
	std::cout <<  "For the holy PLOT!" << std::endl;
}

void 		TacticalMarine::rangedAttack() const
{
	std::cout <<  "* attacks with a bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}