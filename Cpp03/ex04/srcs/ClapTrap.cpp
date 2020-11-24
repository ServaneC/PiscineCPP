/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:02:32 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:45:47 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hp, int mxhp, int nrj, int mxnrj, int lvl, int meldmg,
int rgddmg, int armred, std::string r_name) : hit_pts(hp), max_hit_pts(mxhp), 
energy(nrj), max_energy(mxnrj), level(lvl), melee_dmg(meldmg), ranged_dmg(rgddmg),
armordmg_red(armred), name(r_name)
{
	std::cout << "🔆 " << name << " just woke up..." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy)
{
	*this = to_copy;
	std::cout << "🔆 " << name << " just woke up..." << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "🌙 " << name << " just fell asleep..." << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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
		this->name = rhs.name;
	}
	return *this;
}

int		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << CYAN << name << " attack " << target << " from a distance, causing " <<
		 ranged_dmg << " points of damage!" << END << std::endl;
	return (ranged_dmg);
}
	
int 	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << CYAN << name << " attack " << target << " from close, causing " <<
		 melee_dmg << " points of damage!" << END << std::endl;
	return(melee_dmg);
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	int		damage;

	damage = amount - armordmg_red;
	if (damage < 0)
		damage = 0;
	hit_pts -= damage;
	if (hit_pts < 0)
		hit_pts = 0;
	std::cout << MAG << name << " got attacked and lost " <<
		damage << " HP." END << std::endl;
	print_hp_energy(HP);
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	int new_energy = amount;
	int new_hp = amount;

	if ((int)(hit_pts + new_hp) > max_hit_pts)
		new_hp = max_hit_pts - hit_pts;
	hit_pts += new_hp;
	if ((int)(energy + new_energy) > max_energy)
		new_energy = max_energy  - energy ;
	energy  += new_energy;
	std::cout << GREEN << name << " ate some soup and won back " <<
		new_hp << " HP and " << new_energy << " energy." << END << std::endl;
	print_hp_energy(HPEN);
}

void		ClapTrap::print_hp_energy(int print)
{
	if (print == HP)
		std::cout << GREY << name << " HP is now " << hit_pts << "/" << max_hit_pts << END << std::endl;
	else if (print == EN)
		std::cout << GREY << name << " energy is now " << energy << "/" << max_energy << END << std::endl;
	else
		std::cout << GREY << name << " HP is " << hit_pts << "/" << max_hit_pts << 
		" and its energy is " << energy << "/" << max_energy << END << std::endl;
}

std::string const	ClapTrap::rand_action(const std::string *quotes, \
		unsigned int const arraysize)
{
	const int	alea = std::rand() % arraysize / sizeof(*quotes);
	return (quotes[alea]);
}