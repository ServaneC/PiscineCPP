/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:07:58 by schene            #+#    #+#             */
/*   Updated: 2020/11/20 20:19:23 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string r_name) : hit_pts(100), max_hit_pts(100), \
	energy(50), max_energy(50), level(1), melee_dmg(20), ranged_dmg(15), \
	armordmg_red(3), name(r_name)
{
	std::cout << S_BLUE << "A grandma named " << name << " enter the room." << END << std::endl;
	print_hp_energy(HPEN);
}

ScavTrap::ScavTrap(const ScavTrap &to_copy)
{
	std::cout << S_BLUE << "A grandma named " << name << " enter the room." << END << std::endl;
	*this = to_copy;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << S_BLUE << "Grandma " << name << " went to bed." << END << std::endl;
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
	std::cout << S_BLUE << "A grandma named " << name << " came out of her room." << END << std::endl;
	return *this;
}

				
int		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << S_CYAN << "Grandma " << name << " throw a card game on " << target << " causing " <<
		 ranged_dmg << " points of damage!" << END << std::endl;
	return (ranged_dmg);
}
	
int 	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << S_CYAN << "Grandma " << name << " has tripped up " << target << ", causing " <<
		 melee_dmg << " points of damage!" << END << std::endl;
	return(melee_dmg);
}

void 	ScavTrap::takeDamage(unsigned int amount)
{
	int		damage;

	damage = amount - armordmg_red;
	if (damage < 0)
		damage = 0;
	hit_pts -= damage;
	if (hit_pts < 0)
		hit_pts = 0;
	std::cout << S_MAG << "Grandma " << name << " got attacked and lost " <<
		damage << " HP." END << std::endl;
	print_hp_energy(HP);
}

void 	ScavTrap::beRepaired(unsigned int amount)
{
	int new_energy = amount;
	int new_hp = amount;

	if ((int)(hit_pts + new_hp) > max_hit_pts)
		new_hp = max_hit_pts - hit_pts;
	hit_pts += new_hp;
	if ((int)(energy + new_energy) > max_energy)
		new_energy = max_energy  - energy ;
	energy  += new_energy;
	std::cout << S_GREEN << "Grandma " << name << " drank a tea and won back " <<
		new_hp << " HP and " << new_energy << " energy." << END << std::endl;
	print_hp_energy(HPEN);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		challenges[4] = {"fight against ", "face at a card game ",
		"face in a duel of rock paper scissors ", 
		"face at a game of crosswords against "};
	int				index = std::rand()% 4;

	std::cout << S_YELLOW << "Grandma " << name << " wants to " << challenges[index] << target << END << std::endl;
}

void		ScavTrap::print_hp_energy(int print)
{
	if (print == HP)
		std::cout << S_GREY << name << " HP is now " << hit_pts << "/" << max_hit_pts << END << std::endl;
	else if (print == EN)
		std::cout << S_GREY << name << " energy is now " << energy << "/" << max_energy << END << std::endl;
	else
		std::cout << S_GREY << name << " HP is " << hit_pts << "/" << max_hit_pts << 
		" and her energy is " << energy << "/" << max_energy << END << std::endl;
	std::cout << std::endl;
}
