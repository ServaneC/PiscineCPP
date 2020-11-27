/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:20:04 by schene            #+#    #+#             */
/*   Updated: 2020/11/27 13:34:30 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "PoisonSpray.hpp"

#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "GiantSpider.hpp"

#include "Character.hpp"

int main()
{
	Character* me = new Character("me");

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new GiantSpider();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* ps = new PoisonSpray();

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
	std::cout << *me << *b;
	me->equip(pr);
	me->attack(c);
	std::cout << *me << *c;
	me->attack(c);
	std::cout << *me << *c;
	me->recoverAP();
	std::cout << *me;
	me->equip(ps);
	std::cout << *me << *d;
	me->attack(d);
	me->attack(d);
	std::cout << *me << *d;
	std::cout << "(deleting everything left...)" << std::endl;
	if (b->getHP() > 0)
		delete b;
	if (c->getHP() > 0)
		delete c;
	if (d->getHP() > 0)
		delete d;
	delete pf;
	delete pr;
	delete me;
	return 0;
}