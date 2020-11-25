/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:47:44 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 09:20:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : 
	_name(name), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(Character const & to_copy)
{
	*this = to_copy;
}

Character::~Character()
{

}

Character	&Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_ap = rhs._ap;
		this->_weapon = rhs._weapon;
	}
	return *this;
}

void		Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	return ;
}

void		Character::equip(AWeapon *weapon_ptr)
{
	this->_weapon = weapon_ptr;
	return;
}

void		Character::attack(Enemy *enemy)
{
	if (!this->_weapon || enemy->getHP() <= 0)
		return ;
	else if ((this->_ap - this->_weapon->getAPCost()) >= 0)
	{
		this->_ap -= this->_weapon->getAPCost();
		std::cout << YELLOW << this->_name << " attacks " << enemy->getType() << 
		" with a " << this->_weapon->getName() << END << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string	Character::getName() const
{
	return this->_name;
}

int			Character::getAP() const
{
	return this->_ap;
}

AWeapon		*Character::getWeapon() const
{
	return this->_weapon;
}

std::ostream	&operator<<(std::ostream &o, Character const &rhs)
{
	o << BLUE << rhs.getName() << " has " << GREEN << rhs.getAP() << " AP " << BLUE;
	if (rhs.getWeapon())
		o << " and wields a " << rhs.getWeapon()->getName();
	else
		o << " and is unarmed";
	o << END << std::endl;
	return o;
}
