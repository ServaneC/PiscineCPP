/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 14:21:19 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap jp("Jean-Pierre");
	FragTrap denis("Denis");
	int damage;

	srand (time(NULL));
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	if ((damage = denis.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	jp.beRepaired(50);
	denis.takeDamage(jp.meleeAttack(denis.name));
	denis.takeDamage(jp.rangedAttack(denis.name));
	denis.beRepaired(50);
	if ((damage = jp.vaulthunter_dot_exe(denis.name)))
		denis.takeDamage(damage);
	return (1);
}