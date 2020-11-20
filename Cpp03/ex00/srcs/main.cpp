/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/20 11:15:08 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fg1("Jean-Pierre");
	FragTrap fg2("Denis");
	int damage;

	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	if ((damage = fg2.vaulthunter_dot_exe(fg1.name)))
		fg1.takeDamage(damage);
	fg1.beRepaired(50);
	fg2.takeDamage(fg1.meleeAttack(fg2.name));
	fg2.takeDamage(fg1.rangedAttack(fg2.name));
	fg2.beRepaired(50);
	if ((damage = fg1.vaulthunter_dot_exe(fg2.name)))
		fg2.takeDamage(damage);
	return (1);
}