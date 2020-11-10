/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:20:11 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 14:52:41 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <sstream>

Brain::Brain()
{
	weight = 1.5;
	qi = 100;
}

Brain::Brain(double b_weight, int b_qi)
{
	weight = b_weight;
	qi = b_qi;
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	std::ostringstream address;
	address << (void const *)this;
	return address.str();
}
