/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:07:58 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:54:22 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string r_name) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, r_name)
{
	std::cout << BLUE << "👵 A grandma named " << name << " enter the room." << END << std::endl;
	print_hp_energy(HPEN);
}

ScavTrap::ScavTrap(const ScavTrap &to_copy) : ClapTrap(to_copy)
{
	*this = to_copy;
	std::cout << BLUE << "👵 A grandma named " << name << " enter the room." << END << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << BLUE << "👵 Grandma " << name << " went to bed." << END << std::endl;
	print_hp_energy(HPEN);
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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
	std::cout << BLUE << "👵 A grandma named " << name << " came out of her room." << END << std::endl;
	return *this;
}

int		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << CYAN << "Grandma " << name << " throw a card game on " << target << " from a distance, causing " <<
		 ranged_dmg << " points of damage!" << END << std::endl;
	return (ranged_dmg);
}
	
int 	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << CYAN << "Grandma " << name << " has tripped up " << target << ", causing " <<
		 melee_dmg << " points of damage!" << END << std::endl;
	return(melee_dmg);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	const std::string		challenges[] = {"fight against ", "face at a card game ",
		"face in a duel of rock paper scissors ", 
		"face at a game of crosswords "};

	std::cout << YELLOW << "Grandma " << name << " wants to " << 
		rand_action(challenges, sizeof(challenges)) << target << END << std::endl;
}
