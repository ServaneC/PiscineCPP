/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:53:37 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:41:37 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string s_name) : Victim(s_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & to_copy) : Victim(to_copy)
{
	*this = to_copy;
	std::cout << "Zog zog." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}