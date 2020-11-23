/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:36:36 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 23:34:46 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string s_name) : name(s_name)
{
	std::cout << CYAN << "Some random victim called " << name << " just appeared!" << END << std::endl;
}

Victim::Victim(const Victim & to_copy)
{
	*this = to_copy;
	std::cout << CYAN << "Some random victim called " << name << " just appeared!" << END << std::endl;
}

Victim::~Victim()
{
	std::cout << CYAN << "Victim " << name << " just died for no apparent reason!" << END << std::endl;
}

Victim	&		Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return *this;
}

void	Victim::getPolymorphed() const
{
	std::cout << YELLOW << "🐑 " << name << " has been turned into a cute little sheep!" << END << std::endl;
}

std::ostream	&operator<<(std::ostream & o, const Victim &rhs)
{
	o << CYAN << "I am " << rhs.name << " and I like otters!" << END << std::endl;
	return o;
}