/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:33:53 by schene            #+#    #+#             */
/*   Updated: 2020/11/27 14:39:44 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{

}

Character::Character(Character const & to_copy)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = to_copy._inventory[i];
	this->_name = to_copy._name;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}

Character			&	Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	this->_name = rhs._name;
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void 				Character::equip(AMateria *m)
{
	if (!m || m == 0)
		return ;
	int i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i < 4)
		this->_inventory[i] = m;
}

void 				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	this->_inventory[idx] = NULL;
	while (this->_inventory[idx + 1] && idx < 3)
	{
		this->_inventory[idx] = this->_inventory[idx + 1];
		this->_inventory[idx + 1] = NULL;
		idx++;
	}
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}