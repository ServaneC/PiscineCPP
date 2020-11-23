/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Toad.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 23:47:11 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 23:55:33 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Toad.hpp"

Toad::Toad(std::string s_name) : Victim(s_name)
{
	std::cout << B_GREEN << "Croak Croak." << END << std::endl;
}

Toad::Toad(const Toad & to_copy) : Victim(to_copy)
{
	*this = to_copy;
	std::cout << B_GREEN << "Croak Croak." << END << std::endl;
}

Toad	&		Toad::operator=(Toad const & rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return *this;
}

void	Toad::getPolymorphed() const
{
	std::cout << YELLOW << "👑 " << name << " has been turned into a beautiful prince charming !" << END << std::endl;
}

Toad::~Toad()
{
	std::cout << GREEN << "Crrrrooooooaaarrrrrkkkkk..." << END << std::endl;
}