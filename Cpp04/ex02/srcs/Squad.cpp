/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:05:16 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 12:51:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _units(nullptr)
{

}

Squad::Squad(const Squad & to_copy)
{
	if (this->_count > 0)
	{
		for (int i = 0; i < this->_count; i++)
			delete _units[i];
		delete this->_units;
	}
	this->_count = to_copy._count;
	for (int i = 0; i < this->_count; i++)
		_units[i] = to_copy._units[i];
}

Squad::~Squad()
{
	if (this->_units)
	{
		for (int i = 0; i < this->_count; i++)
			delete _units[i];
		delete [] _units;
	}
	this->_units = nullptr;
}

Squad	&Squad::operator=(const Squad & rhs)
{;
	if (this->_count > 0)
	{
		for (int i = 0; i < this->_count; i++)
			delete _units[i];
		delete this->_units;
	}
	this->_count = rhs._count;
	for (int i = 0; i < this->_count; i++)
		_units[i] = rhs._units[i];
	return *this;
}

int				Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n >= this->_count || n < 0)
		return nullptr;
	return this->_units[n];
}

int				Squad::push(ISpaceMarine *to_push)
{
	if (!to_push)
		return this->_count;
	if (this->_units)
	{
		for (int i = 0; i < this->_count; i++)
		{
			if (this->_units[i] == to_push)
				return this->_count;
		}
		ISpaceMarine	**array = new ISpaceMarine *[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			array[i] = _units[i];
		delete [] this->_units;
		this->_units = array;
		this->_units[this->_count] = to_push;
		this->_count += 1;
	}
	else
	{
		this->_units = new ISpaceMarine*[1];
		this->_units[0] = to_push;
		this->_count = 1;
	}
	return this->_count;
}
