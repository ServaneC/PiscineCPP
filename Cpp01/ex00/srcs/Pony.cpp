/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:26:58 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 15:03:55 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string p_name, std::string p_color)
{
	name = p_name;
	age = 0;
	color = p_color;
	hungry = 0;
	level = 0;
	std::cout << YELLOW << "🐴 A cute little " << color << " Pony named " << name << " is born." << ENDL;
}

Pony::~Pony()
{
	std::cout << YELLOW << "😇 " << name << " was a " << age << " years old " << color << 
		" Pony and joined the pony paradise today, RIP " << name << ENDL;
}

void	Pony::birthday()
{
	age++;
	std::cout << CYAN << "🎂 " << name << " is now " << age << " years old." << ENDL;
}

void	Pony::feed_poney()
{
	if (hungry)
	{
		hungry--;
		std::cout << MAG << "🥕 " << name << " has been fed." << ENDL;
	}
	else
		std::cout << ERROR << name << " is not hungry." << ENDL;
}

void	Pony::exercise()
{
	if (!hungry)
	{
		level++;
		hungry++;
		std::cout << GREEN << "✅ " << name << " exercised and reached level " << level << ENDL;
	}
	else
		std::cout << ERROR << name << " is hungry and need to eat before exercising." << ENDL;
}