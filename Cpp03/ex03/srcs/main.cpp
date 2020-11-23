/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 12:09:50 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap jp("Jean-Pierre");
	ScavTrap gm("Bernadette");
	NinjaTrap nurse1("Josephine");
	NinjaTrap nurse2("Sylvie");
	int damage;

	srand (time(NULL));
	if ((damage = jp.vaulthunter_dot_exe(nurse1.name)))
		nurse1.takeDamage(damage);
	if ((damage = jp.vaulthunter_dot_exe(nurse2.name)))
		nurse2.takeDamage(damage);
	if ((damage = jp.vaulthunter_dot_exe(nurse1.name)))
		nurse1.takeDamage(damage);
	nurse1.beRepaired(50);
	gm.takeDamage(nurse1.meleeAttack(jp.name));
	gm.takeDamage(nurse2.rangedAttack(jp.name));
	nurse1.ninjaShoebox(nurse2);
	nurse2.ninjaShoebox(gm);
	nurse1.ninjaShoebox(jp);
	nurse1.takeDamage(gm.rangedAttack(jp.name));
	nurse2.ninjaShoebox(nurse1);
	nurse1.ninjaShoebox(gm);
	nurse1.ninjaShoebox(jp);
	return (1);
}