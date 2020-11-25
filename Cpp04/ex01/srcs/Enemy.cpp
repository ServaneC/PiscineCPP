/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:06:17 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 09:21:02 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const & to_copy)
{
	*this = to_copy;
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy	&Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return *this;
}

std::string Enemy::getType() const
{
	return this->_type;
}

int 		Enemy::getHP() const
{
	return this->_hp;
}

void		Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->_hp -= damage;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Enemy const &rhs)
{
	if (rhs.getHP() >= 0)
		o << GREY << rhs.getType() << " have " << GREEN << rhs.getHP() << 
			" HP " << GREY <<"left" << END << std::endl;
	return o;
}