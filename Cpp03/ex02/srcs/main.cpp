/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/22 12:52:09 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap jp("Jean-Pierre");
	FragTrap denis("Denis");
	ScavTrap gm("Bernadette");
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
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(denis.name);
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(denis.name);
	gm.challengeNewcomer(jp.name);
	gm.challengeNewcomer(denis.name);
	return (1);
}