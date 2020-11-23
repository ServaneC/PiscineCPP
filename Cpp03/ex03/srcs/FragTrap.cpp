/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:42:06 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:53:37 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string r_name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, r_name)
{
	std::cout << BLUE << "👴 A grandpa named " << name << " came out of his room." << END << std::endl;
	print_hp_energy(HPEN);
}

FragTrap::FragTrap(const FragTrap &to_copy) : ClapTrap(to_copy)
{
	*this = to_copy;
	std::cout << BLUE << "👴 A grandpa named " << name << " came out of his room." << END << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << BLUE << "👴 Grandpa " << name << " went back to his room." << END << std::endl;
	print_hp_energy(HPEN);
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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
	std::cout << BLUE << "👴 A grandpa named " << name << " came out of his room." << END << std::endl;
	return *this;
}

int		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << CYAN << "Grandpa " << name << " throw his scrabble game on " << target 
		<< " from a distance, causing " << ranged_dmg << " points of damage!" << END << std::endl;
	return (ranged_dmg);
}

int 	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << CYAN << "Grandpa "<< name << " hit " << target << " with his cane, causing " <<
		 melee_dmg << " points of damage!" << END << std::endl;
	return(melee_dmg);
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	const std::string		attacks[] = {" throw his denture on ", " rush with his wheelchair towards ",
		" steals the walker from ", " spit on the face of ", " slap "};
	int				damage = std::rand()% 50 + 1;

	if (energy >= 25)
	{
		energy -= 25;
		std::cout << YELLOW << "Grandpa " << name << rand_action(attacks, sizeof(attacks)) << target << " causing " <<
			damage << " points of damage!" << END << std::endl;
		print_hp_energy(EN);
		return (damage);
	}
	std::cout << RED << "Grandpa " << name << " don't have enough energy to attack " <<
		target << END << std::endl;
	print_hp_energy(HPEN);
	return (0);
}
