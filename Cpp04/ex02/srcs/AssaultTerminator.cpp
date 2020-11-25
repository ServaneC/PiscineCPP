/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:04:44 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 12:14:15 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << GREEN <<  "* teleports from space *" << END << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & to_copy)
{
	(void)to_copy;
	std::cout << GREEN <<  "* teleports from space *" << END << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << RED <<  "I’ll be back..." << END << std::endl;
}


AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	(void)rhs;
	return *this;
}

ISpaceMarine* 	AssaultTerminator::clone() const
{
	AssaultTerminator *clone= new AssaultTerminator;
	
	return clone;
}

void 			AssaultTerminator::battleCry() const
{
	std::cout <<   "This code is unclean. PURIFY IT!" << std::endl;
}

void 		AssaultTerminator::rangedAttack() const
{
	std::cout <<   "* does nothing *" << std::endl;
}

void 			AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}