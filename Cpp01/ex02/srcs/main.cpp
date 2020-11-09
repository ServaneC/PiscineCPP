/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:32:04 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 18:33:26 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie		z1("Roger", "walker");
	ZombieEvent event1;
	Zombie 		*z2;
	Zombie 		*z3;

	std::cout << "Created in main from constructor... (allocated on the heap)\n";
	z1.announce();
	event1.setZombieType("runner");
	z2 = event1.newZombie("Patrick");
	std::cout << "\nCreated from the newZombie function... (allocated on the heap)\n";
	z2->announce();
	event1.setZombieType("voodoo");
	std::cout << "\nCreated from the randomChump function... (allocated on the heap)\n";
	z3 = event1.randomChump();
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		z1.eat_someone();
	for (int i = 0; i < 2; i++)
		z2->eat_someone();
	for (int i = 0; i < 4; i++)
		z3->eat_someone();
	std::cout << "\ndeleting the newZombie...\n";
	delete z2;
	std::cout << "\ndeleting the randomChump...\n";
	delete z3;
	std::cout << "\nreturn...\n";
	return (1);
}