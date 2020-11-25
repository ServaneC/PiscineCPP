/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:25:11 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 23:51:39 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Fire.hpp"

# define GREY "\033[0;90m"
# define END "\033[0m"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	std::cout << GREY << "inventory = [ice][cure][fire][cure]" << END << std::endl;
	std::cout << GREY << "cure XP (last one) = " << tmp->getXP() << END << std::endl;
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	std::cout << GREY << "cure XP (last one) = " << tmp->getXP() << END << std::endl;
	me->unequip(1);
	std::cout << GREY << "inventory = [ice][fire][cure][/]" << END << std::endl;
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	me->unequip(0);
	std::cout << GREY << "cure XP (last one) = " << tmp->getXP() << END << std::endl;
	std::cout << GREY << "inventory = [fire][cure][/][/]" << END << std::endl;
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	std::cout << GREY << "cure XP (last one) = " << tmp->getXP() << END << std::endl;
	me->unequip(0);
	me->unequip(0);
	std::cout << GREY << "inventory = [/][/][/][/]" << END << std::endl;
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}