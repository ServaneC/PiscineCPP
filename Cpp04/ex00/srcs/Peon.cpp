/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:53:37 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:45:16 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string s_name) : Victim(s_name)
{
	std::cout << GREEN << "Zog zog." << END << std::endl;
}

Peon::Peon(const Peon & to_copy) : Victim(to_copy)
{
	*this = to_copy;
	std::cout << GREEN << "Zog zog." << END << std::endl;
}

Peon	&		Peon::operator=(Peon const & rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return *this;
}


void	Peon::getPolymorphed() const
{
	std::cout << YELLOW << "🦄 " << name << " has been turned into a pink pony!" << END << std::endl;
}

Peon::~Peon()
{
	std::cout << GREEN << "Bleuark..." << END << std::endl;
}