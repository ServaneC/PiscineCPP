/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:21:04 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 23:57:45 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Witch.hpp"
#include "Toad.hpp"

int main()
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Witch		sabrina("Sabrina", "The Apprentice");
	Toad		harry("Harry");

	std::cout << "(Annoncement...)" << std::endl;
	std::cout << robert << jim << joe << sabrina << harry;
	
	std::cout << "(call to the functions ...)" <<std::endl;
	robert.polymorph(jim);
	sabrina.make_potion();
	robert.polymorph(joe);
	sabrina.polymorph(harry);
	std::cout << "(return...)" << std::endl;
	return 0;
}