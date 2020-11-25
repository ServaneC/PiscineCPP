/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:32:18 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 13:39:43 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(NULL);
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	ISpaceMarine* kevin = new TacticalMarine;
	ISpaceMarine* stuart = new TacticalMarine;
	ISpaceMarine* carl = new AssaultTerminator;
	ISpaceMarine* dave = new AssaultTerminator;

	Squad* gru = vlc;

	gru->push(NULL);
	gru->push(stuart);
	gru->push(kevin);
	gru->push(dave);
	gru->push(carl);
	gru->push(kevin);
	gru->push(stuart->clone());

	for (int i = 0; i < gru->getCount(); ++i)
	{
		ISpaceMarine* cur = gru->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete gru;
	return (0);
}
