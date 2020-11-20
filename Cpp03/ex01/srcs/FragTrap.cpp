/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:42:06 by schene            #+#    #+#             */
/*   Updated: 2020/11/20 20:19:41 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string r_name) : hit_pts(100), max_hit_pts(100), \
	energy(100), max_energy(100), level(1), melee_dmg(30), ranged_dmg(20), \
	armordmg_red(5), name(r_name)
{
	std::cout << BLUE << "A grandpa named " << name << " came out of his room." << END << std::endl;
	print_hp_energy(HPEN);
}

FragTrap::FragTrap(const FragTrap &to_copy)
{
	std::cout << BLUE << "A grandpa named " << name << " came out of his room." << END << std::endl;
	*this = to_copy;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << BLUE << "Grandpa " << name << " went back to his room." << END << std::endl;
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
	std::cout << BLUE << "A grandpa named " << name << " came out of his room." << END << std::endl;
	return *this;
}

				
int		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << CYAN << "Grandpa " << name << " throw his scrabble game on " << target << " causing " <<
		 ranged_dmg << " points of damage!" << END << std::endl;
	return (ranged_dmg);
}
	
int 	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << CYAN << "Grandpa " << name << " hit " << target << " with his cane, causing " <<
		 melee_dmg << " points of damage!" << END << std::endl;
	return(melee_dmg);
}

void 	FragTrap::takeDamage(unsigned int amount)
{
	int		damage;

	damage = amount - armordmg_red;
	if (damage < 0)
		damage = 0;
	hit_pts -= damage;
	if (hit_pts < 0)
		hit_pts = 0;
	std::cout << MAG << "Grandpa " << name << " got attacked and lost " <<
		damage << " HP." END << std::endl;
	print_hp_energy(HP);
}

void 	FragTrap::beRepaired(unsigned int amount)
{
	int new_energy = amount;
	int new_hp = amount;

	if ((int)(hit_pts + new_hp) > max_hit_pts)
		new_hp = max_hit_pts - hit_pts;
	hit_pts += new_hp;
	if ((int)(energy + new_energy) > max_energy)
		new_energy = max_energy  - energy ;
	energy  += new_energy;
	std::cout << GREEN << "Grandpa " << name << " ate some soup and won back " <<
		new_hp << " HP and " << new_energy << " energy." << END << std::endl;
	print_hp_energy(HPEN);
}


int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string		attacks[5] = {" throw his denture on ", " rush with his wheelchair towards ",
		" steals the walker from ", " spit on the face of ", " slap "};
	int				index = std::rand()% 5;
	int				damage = std::rand()% 50 + 1;

	if (energy >= 25)
	{
		energy -= 25;
		std::cout << YELLOW << "Grandpa " << name << attacks[index] << target << " causing " <<
			damage << " points of damage!" << END << std::endl;
		print_hp_energy(EN);
		return (damage);
	}
	std::cout << RED << "Grandpa " << name << " don't have enough energy to attack " <<
		target << END << std::endl;
	print_hp_energy(HPEN);
	return (0);
}

void		FragTrap::print_hp_energy(int print)
{
	if (print == HP)
		std::cout << GREY << name << " HP is now " << hit_pts << "/" << max_hit_pts << END << std::endl;
	else if (print == EN)
		std::cout << GREY << name << " energy is now " << energy << "/" << max_energy << END << std::endl;
	else
		std::cout << GREY << name << " HP is " << hit_pts << "/" << max_hit_pts << 
		" and his energy is " << energy << "/" << max_energy << END << std::endl;
	std::cout << std::endl;

}
