/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:33:47 by schene            #+#    #+#             */
/*   Updated: 2020/11/22 15:42:44 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string r_name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, r_name),
FragTrap(), NinjaTrap()
{
	std::cout << BLUE << "🤝 A grandpa and a nurse joined forces to create an alliance named " << this->name << END << std::endl;
	print_hp_energy(HPEN);
}

SuperTrap::SuperTrap(const SuperTrap &to_copy)
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
	{
		this->hit_pts = rhs.hit_pts;
		this->max_hit_pts = rhs.max_hit_pts;
		this->energy = rhs.energy;
		this->max_energy = rhs.max_energy;
		this->level = rhs.level;
		this->melee_dmg = rhs.melee_dmg;
		this->ranged_dmg = rhs.ranged_dmg;
		this->armordmg_red = rhs.armordmg_red;
	}
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