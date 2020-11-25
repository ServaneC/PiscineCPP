/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:06:27 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:45:12 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const  s_name, std::string const s_title) : 
	name(s_name), title(s_title)
{
	std::cout << MAG << name << ", " << title << ", is born!" << END << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & to_copy)
{
	*this = to_copy;
	std::cout << MAG << name << ", " << title << ", is born!" << END << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << MAG << name << ", " << title << ", is dead. Consequences will never be the same!" << END << std::endl;
}

Sorcerer	&	Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}


void 	Sorcerer::polymorph(Victim const &to_poly) const
{
	to_poly.getPolymorphed();
}

std::ostream	&operator<<(std::ostream & o, const Sorcerer &rhs)
{
	o << MAG << "I am " << rhs.name << ", " << rhs.title << ", and I like ponies!" << END << std::endl;
	return o;
}
