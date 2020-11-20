/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/20 20:20:56 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap fg1("Jean-Pierre");
	FragTrap fg2("Denis");
	ScavTrap st1("Bernadette");
	int damage;

	if ((damage = fg2.vaulthunter_dot_exe(st1.name)))
		st1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(st1.name)))
		st1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	st1.beRepaired(50);
	fg2.takeDamage(fg1.meleeAttack(fg2.name));
	fg2.takeDamage(fg1.rangedAttack(fg2.name));
	st1.challengeNewcomer(fg1.name);
	st1.challengeNewcomer(fg2.name);
	st1.challengeNewcomer(fg1.name);
	st1.challengeNewcomer(fg2.name);
	st1.challengeNewcomer(fg1.name);
	st1.challengeNewcomer(fg2.name);
	return (1);
}