/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:42:06 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 14:22:25 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string r_name) : _hit_pts(100), _max_hit_pts(100), \
	_energy(100), _max_energy(100), _level(1), _melee_dmg(30), _ranged_dmg(20), \
	_armordmg_red(5), name(r_name)
{
	std::cout << BLUE << "A grandpa named " << name << " came out of his room." << END << std::endl;
	_print_hp_energy(HPEN);
}

FragTrap::FragTrap(const FragTrap &to_copy)
{
	*this = to_copy;
	std::cout << BLUE << "A grandpa named " << name << " came out of his room." << END << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << BLUE << "Grandpa " << name << " went back to his room." << END << std::endl;
	_print_hp_energy(HPEN);
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_max_hit_pts = rhs._max_hit_pts;
		this->_energy = rhs._energy;
		this->_max_energy = rhs._max_energy;
		this->_level = rhs._level;
		this->_melee_dmg = rhs._melee_dmg;
		this->_ranged_dmg = rhs._ranged_dmg;
		this->_armordmg_red = rhs._armordmg_red;
		this->name = rhs.name;
	}
	return *this;
}

				
int		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << CYAN << "Grandpa " << name << " throw his scrabble game on " << target << " causing " <<
		 _ranged_dmg << " points of damage!" << END << std::endl;
	return (_ranged_dmg);
}
	
int 	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << CYAN << "Grandpa " << name << " hit " << target << " with his cane, causing " <<
		 _melee_dmg << " points of damage!" << END << std::endl;
	return(_melee_dmg);
}

void 	FragTrap::takeDamage(unsigned int amount)
{
	int		damage;

	damage = amount - _armordmg_red;
	if (damage < 0)
		damage = 0;
	_hit_pts -= damage;
	if (_hit_pts < 0)
		_hit_pts = 0;
	std::cout << MAG << "Grandpa " << name << " got attacked and lost " <<
		damage << " HP." END << std::endl;
	_print_hp_energy(HP);
}

void 	FragTrap::beRepaired(unsigned int amount)
{
	int new_energy = amount;
	int new_hp = amount;

	if ((int)(_hit_pts + new_hp) > _max_hit_pts)
		new_hp = _max_hit_pts - _hit_pts;
	_hit_pts += new_hp;
	if ((int)(_energy + new_energy) > _max_energy)
		new_energy = _max_energy  - _energy ;
	_energy  += new_energy;
	std::cout << GREEN << "Grandpa " << name << " ate some soup and won back " <<
		new_hp << " HP and " << new_energy << " energy." << END << std::endl;
	_print_hp_energy(HPEN);
}


int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string		attacks[5] = {" throw his denture on ", " rush with his wheelchair towards ",
		" steals the walker from ", " spit on the face of ", " slap "};
	int				index = std::rand()% 5;
	int				damage = std::rand()% 50 + 1;

	if (_energy >= 25)
	{
		_energy -= 25;
		std::cout << YELLOW << "Grandpa " << name << attacks[index] << target << " causing " <<
			damage << " points of damage!" << END << std::endl;
		_print_hp_energy(EN);
		return (damage);
	}
	std::cout << RED << "Grandpa " << name << " don't have enough energy to attack " <<
		target << END << std::endl;
	_print_hp_energy(HPEN);
	return (0);
}

void		FragTrap::_print_hp_energy(int print)
{
	if (print == HP)
		std::cout << GREY << name << " HP is now " << _hit_pts << "/" << _max_hit_pts << END << std::endl;
	else if (print == EN)
		std::cout << GREY << name << " energy is now " << _energy << "/" << _max_energy << END << std::endl;
	else
		std::cout << GREY << name << " HP is " << _hit_pts << "/" << _max_hit_pts << 
		" and its energy is " << _energy << "/" << _max_energy << END << std::endl;
}
