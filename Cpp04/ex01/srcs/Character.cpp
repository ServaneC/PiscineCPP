/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:47:44 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:36:14 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name), ap(40), weapon(NULL)
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
		this->name = rhs.name;
		this->ap = rhs.ap;
		this->weapon = rhs.weapon;
	}
	return *this;
}

void		Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
	return ;
}

void		Character::equip(AWeapon *weapon_ptr)
{
	this->weapon = weapon_ptr;
	return;
}

void		Character::attack(Enemy *enemy)
{
	if (!this->weapon || enemy->getHP() <= 0)
		return ;
	else if ((this->ap - this->weapon->getAPCost()) >= 0)
	{
		this->ap -= this->weapon->getAPCost();
		std::cout << YELLOW << this->name << " attacks " << enemy->getType() << 
		" with a " << this->weapon->getName() << END << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string	Character::getName() const
{
	return this->name;
}

int			Character::getAP() const
{
	return this->ap;
}

AWeapon		*Character::getWeapon() const
{
	return this->weapon;
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
