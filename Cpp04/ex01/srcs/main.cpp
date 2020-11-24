/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:20:04 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:42:37 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << *me << *b << *c;
	me->equip(pr);
	std::cout << *me;
	me->attack(c);
	me->attack(c);
	me->attack(c);
	std::cout << *me << *c;
	me->equip(pf);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	std::cout << *me << *b;
	me->equip(pr);
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
	std::cout << *me << *c;

	std::cout << "(deleting everything left...)" << std::endl;
	if (b->getHP() >= 0)
		delete b;
	if (c->getHP() >= 0)
		delete c;
	delete pf;
	delete pr;
	delete me;
	return 0;
}