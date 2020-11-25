/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:04:53 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 23:56:39 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & to_copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = to_copy._inventory[i];
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

void 			MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	int i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i < 4)
		this->_inventory[i] = m;
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return 0;
}
