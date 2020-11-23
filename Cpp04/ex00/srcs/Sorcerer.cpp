/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:06:27 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 17:03:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string s_name, std::string s_title) : name(s_name), title(s_title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & to_copy)
{
	*this = to_copy;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

void 	Sorcerer::polymorph(Victim const &to_poly) const
{
	to_poly.getPolymorphed();
}

std::ostream	&operator<<(std::ostream & o, const Sorcerer &rhs)
{
	o << "I am " << rhs.name << ", " << rhs.title << ", and I like ponies!" << std::endl;
	return o;
}
