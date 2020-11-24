/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:07:58 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:46:41 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string r_name) : _hit_pts(100), _max_hit_pts(100), \
	_energy(50), _max_energy(50), _level(1), _melee_dmg(20), _ranged_dmg(15), \
	_armordmg_red(3), name(r_name)
{
	std::cout << S_BLUE << "A grandma named " << name << " enter the room." << END << std::endl;
	_print_hp_energy(HPEN);
}

ScavTrap::ScavTrap(const ScavTrap &to_copy)
{
	*this = to_copy;
	std::cout << S_BLUE << "A grandma named " << name << " enter the room." << END << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << S_BLUE << "Grandma " << name << " went to bed." << END << std::endl;
	_print_hp_energy(HPEN);
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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
	}
	std::cout << S_BLUE << "A grandma named " << name << " came out of her room." << END << std::endl;
	return *this;
}

				
int		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << S_CYAN << "🃏 Grandma " << name << " throw a card game on " << target << " causing " <<
		 _ranged_dmg << " points of damage!" << END << std::endl;
	return (_ranged_dmg);
}
	
int 	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << S_CYAN << "🤜 Grandma " << name << " has tripped up " << target << ", causing " <<
		 _melee_dmg << " points of damage!" << END << std::endl;
	return(_melee_dmg);
}

void 	ScavTrap::takeDamage(unsigned int amount)
{
	int		damage;

	damage = amount - _armordmg_red;
	if (damage < 0)
		damage = 0;
	_hit_pts -= damage;
	if (_hit_pts < 0)
		_hit_pts = 0;
	std::cout << S_MAG << "Grandma " << name << " got attacked and lost " <<
		damage << " HP." END << std::endl;
	_print_hp_energy(HP);
}

void 	ScavTrap::beRepaired(unsigned int amount)
{
	int new_energy = amount;
	int new_hp = amount;

	if ((int)(_hit_pts + new_hp) > _max_hit_pts)
		new_hp = _max_hit_pts - _hit_pts;
	_hit_pts += new_hp;
	if ((int)(_energy + new_energy) > _max_energy)
		new_energy = _max_energy  - _energy ;
	_energy  += new_energy;
	std::cout << S_GREEN << "Grandma " << name << " drank a tea and won back " <<
		new_hp << " HP and " << new_energy << " energy." << END << std::endl;
	_print_hp_energy(HPEN);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		challenges[4] = {"fight against ", "face at a card game ",
		"face in a duel of rock paper scissors ", 
		"face at a game of crosswords against "};
	int				index = std::rand()% 4;

	std::cout << S_YELLOW << "Grandma " << name << " wants to " << challenges[index] << target << END << std::endl;
}

void		ScavTrap::_print_hp_energy(int print)
{
	if (print == HP)
		std::cout << S_GREY << name << " HP is now " << _hit_pts << "/" << _max_hit_pts << END << std::endl;
	else if (print == EN)
		std::cout << S_GREY << name << " energy is now " << _energy << "/" << _max_energy << END << std::endl;
	else
		std::cout << S_GREY << name << " HP is " << _hit_pts << "/" << _max_hit_pts << 
		" and her energy is " << _energy << "/" << _max_energy << END << std::endl;
}
