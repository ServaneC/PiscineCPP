/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:45:16 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:02:04 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main()
{
	int nb = 8;
	ZombieHorde horde(nb, "The undeads");

	horde.annonce();
	for (int i = 0; i < 3; i++)
		horde.infect_human();
	return (1);
}
