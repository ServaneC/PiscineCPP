/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/22 23:20:15 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap jp("Jean-Pierre");
	NinjaTrap nurse("Sylvie");
	SuperTrap alliance("SuperOld");

	int damage;
	nurse.takeDamage(alliance.rangedAttack(nurse.name));
	jp.takeDamage(alliance.meleeAttack(jp.name));
	if ((damage = alliance.vaulthunter_dot_exe(nurse.name)))
		nurse.takeDamage(damage);
	if ((damage = alliance.vaulthunter_dot_exe(jp.name)))
		jp.takeDamage(damage);
	alliance.beRepaired(30);
	alliance.ninjaShoebox(jp);
	alliance.ninjaShoebox(nurse);
	return (1);
}