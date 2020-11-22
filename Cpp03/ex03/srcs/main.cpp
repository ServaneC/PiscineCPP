/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/22 12:58:08 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap jp("Jean-Pierre");
	FragTrap denis("Denis");
	ScavTrap gm("Bernadette");
	NinjaTrap nurse1("Josephine");
	NinjaTrap nurse2("Sylvie");

	int damage;

	if ((damage = denis.vaulthunter_dot_exe(gm.name)))
		gm.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(gm.name)))
		gm.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	gm.beRepaired(50);
	denis.takeDamage(jp.meleeAttack(denis.name));
	denis.takeDamage(jp.rangedAttack(denis.name));
	denis.beRepaired(50);
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(denis.name);
	jp.takeDamage(gm.meleeAttack(jp.name));
	nurse1.ninjaShoebox(nurse2);
	nurse2.ninjaShoebox(gm);
	nurse1.ninjaShoebox(denis);
	nurse1.ninjaShoebox(jp);
	nurse1.takeDamage(gm.rangedAttack(jp.name));
	denis.takeDamage(nurse1.rangedAttack(denis.name));
	gm.takeDamage(nurse2.meleeAttack(gm.name));
	nurse2.ninjaShoebox(nurse1);
	nurse1.ninjaShoebox(gm);
	nurse2.ninjaShoebox(denis);
	nurse1.ninjaShoebox(jp);
	return (1);
}