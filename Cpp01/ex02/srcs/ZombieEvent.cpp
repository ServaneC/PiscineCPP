/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:09:47 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:01:48 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string z_type)
{
	type = z_type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
}

Zombie	*ZombieEvent::randomChump()
{
	char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
	char vowels[] = {'a','e','i','o','u','y'};
	std::string name = "";
	int random = rand() % 2;
	int count = 0;
	Zombie *random_zombie;

	for(int i = 0; i < 7; i++) 
	{
		if (random < 2 && count < 2)
		{
    		name = name + consonents[rand() % 19];
    		count++;
   		}
    	else
		{
      		name = name + vowels[rand() % 5];
      		count = 0;
    	}
    	random = rand() % 2;
  	}
	random_zombie = newZombie(name);
	random_zombie->announce();
	return (random_zombie);
}
