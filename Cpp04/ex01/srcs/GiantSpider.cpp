/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GiantSpider.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:56:55 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 00:03:16 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GiantSpider.hpp"

GiantSpider::GiantSpider() : Enemy(30, "GiantSpider")
{
	std::cout << "* tip tappy tip *" << std::endl;
}

GiantSpider::GiantSpider(GiantSpider const & to_copy) : Enemy(to_copy)
{
	*this = to_copy;
	std::cout << "* tip tappy tip *" << std::endl;
}

GiantSpider::~GiantSpider()
{
	std::cout << "* squuuiiish *" << std::endl;
}

GiantSpider & GiantSpider::operator=(GiantSpider const & rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return *this;
}