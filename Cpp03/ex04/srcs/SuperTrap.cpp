/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:33:47 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:45:22 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string r_name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, r_name),
FragTrap(), NinjaTrap()
{
	std::cout << BLUE << "🤝 A grandpa and a nurse joined forces to create an alliance named " << this->name << END << std::endl;
	print_hp_energy(HPEN);
}

SuperTrap::SuperTrap(const SuperTrap &to_copy) : ClapTrap(to_copy)
{
	*this = to_copy;
	std::cout << BLUE << "🤝 A grandpa and a nurse joined forces to create an alliance named " << this->name << END << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << BLUE << "👋 The " << name << " alliance ended." << END << std::endl;
	print_hp_energy(HPEN);
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	std::cout << BLUE << "🤝 A grandpa and a nurse joined forces to create an alliance named " << this->name << END << std::endl;
	return *this;
}

int		SuperTrap::rangedAttack(std::string const & target)
{
	return (FragTrap::rangedAttack(target));
}

int 	SuperTrap::meleeAttack(std::string const & target)
{
	return (NinjaTrap::meleeAttack(target));
}