/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:05:16 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 23:31:58 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count(0), units(nullptr)
{

}

Squad::Squad(const Squad & to_copy)
{
	if (this->count > 0)
	{
		for (int i = 0; i < this->count; i++)
			delete units[i];
	}
	this->count = to_copy.count;
	for (int i = 0; i < this->count; i++)
		units[i] = to_copy.units[i];
}

Squad::~Squad()
{
	for (int i = 0; i < this->count; i++)
			delete units[i];
}

Squad	&Squad::operator=(const Squad & rhs)
{
	if (this->count > 0)
	{
		for (int i; i < this->count; i++)
			delete units[i];
	}
	this->count = rhs.count;
	for (int i; i < this->count; i++)
		units[i] = rhs.units[i];
	return *this;
}

int				Squad::getCount() const
{
	return this->count;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n >= this->count)
		return nullptr;
	return this->units[n];
}

int				Squad::push(ISpaceMarine *to_push)
{
	if (!to_push)
		return this->count;
	for (int i = 0; i < this->count; i++)
	{
		if (this->units[i] == to_push)
			return this->count;
	}
	units[this->count] = to_push;
	this->count++;
	return this->count;
}
