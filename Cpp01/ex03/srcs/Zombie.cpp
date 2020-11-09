/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:56:02 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 22:20:33 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():
    type(std::string()), name(std::string())
{
	victims = 0;
}

Zombie::Zombie(std::string z_name, std::string z_type)
{
	name = z_name;
	type = z_type;
	victims = 0;
}

Zombie::~Zombie()
{
	std::cout << DEAD << name << " got is brain destroyed. He ate a total of " << victims << " humans."<< ENDL;
}

void	Zombie::announce()
{
	std::cout << TALK << name << " ("<< type << "): Braiiiiiiinnnssss..." << ENDL;
}

void	Zombie::eat_someone()
{
	victims++;
	std::cout << EAT << name << " ate an innocent human." << ENDL;
}