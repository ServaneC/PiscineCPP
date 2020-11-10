/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:46:01 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:02:14 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string		ZombieHorde::gen_name()
{
	char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
	char vowels[] = {'a','e','i','o','u','y'};
	std::string name = "";
	int random = rand() % 2;
	int count = 0;

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
	return (name);
}

ZombieHorde::ZombieHorde(int n, std::string h_name)
{
	nb_zombies = n;
	horde_name = h_name;
	nb_infections = 0;
	horde = new Zombie[n];
	const std::string type[] = {"runner", "walker", "crawler", "spitter"};

	for (int i = 0; i < n; i++)
	{
		horde[i].name = gen_name();
		horde[i].type = type[std::rand() % sizeof(type) / sizeof(*type)];
	}
	std::cout << INFO << horde_name << " horde with " << nb_zombies << " zombies was created." << ENDL;
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
	std::cout << INFO << horde_name << " horde has been destroyed after infecting " << nb_infections << " humans" << ENDL;

}

void	ZombieHorde::annonce()
{
	for (int i = 0; i < nb_zombies; i++)
		horde[i].announce();
}

void	ZombieHorde::infect_human()
{
	nb_infections += nb_zombies / 2;
	std::cout << EAT << horde_name << " horde has infected " << nb_zombies / 2 << " humans" << ENDL;
	std::cout << "❗️ There is now " << nb_infections << " humans infected by the horde\n";
}
