/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:01:24 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 14:57:27 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <string>
#include <sstream>

Human::Human()
{
}

Human::~Human()
{
}

const Brain &Human::getBrain(void)
{
	return (this->brain);
}

std::string Human::identify(void)
{
	return (this->brain.identify());
}
