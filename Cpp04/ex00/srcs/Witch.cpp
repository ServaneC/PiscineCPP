/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Witch.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:56:25 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 23:34:50 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Witch.hpp"

Witch::Witch(std::string const s_name, std::string const s_title) : 
	Sorcerer(s_name, s_title)
{
	std::cout << B_MAG << "The Witch " << name << ", " << title << " appeared !" << END << std::endl;
}

Witch::Witch(const Witch & to_copy) : Sorcerer(to_copy)
{
	*this = to_copy;
	std::cout << B_MAG << "The Witch " << name << ", " << title << " appeared !" << END << std::endl;
}

Witch::~Witch()
{
	std::cout << B_MAG << "The Witch " << name << ", " << title << " flew away on her broom!" << END << std::endl;
}

Witch	&	Witch::operator=(Witch const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

void		Witch::make_potion()
{
	std::cout << BLUE << name << ", " << title << " prepared a wicked potion !" << END << std::endl;
}

std::ostream	&operator<<(std::ostream & o, const Witch &rhs)
{
	o << B_MAG << "I am " << rhs.name << ", " << rhs.title << ", the witch and i love making potions !" << END << std::endl;
	return o;
}
