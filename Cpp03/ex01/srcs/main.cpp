/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 12:09:30 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap jp("Jean-Pierre");
	ScavTrap gm("Bernadette");
	int damage;

	srand (time(NULL));
	if ((damage = jp.vaulthunter_dot_exe(gm.name)))
		gm.takeDamage(damage);
	if ((damage = jp.vaulthunter_dot_exe(gm.name)))
		gm.takeDamage(damage);
	if ((damage = jp.vaulthunter_dot_exe(gm.name)))
		gm.takeDamage(damage);
	gm.beRepaired(50);
	jp.takeDamage(gm.meleeAttack(jp.name));
	jp.takeDamage(gm.rangedAttack(jp.name));
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(jp.name);
	return (1);
}