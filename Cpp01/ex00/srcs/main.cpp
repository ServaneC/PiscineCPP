/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:27:04 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 14:54:05 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string p_name, std::string p_color)
{
	Pony stack_pony(p_name, p_color);
	
	std::cout << "\n=== This pony was allocated on the stack ===\n\n";
	for (int i = 0; i < 3; i++)
	{
		stack_pony.feed_poney();
		stack_pony.exercise();
		stack_pony.birthday();
		std::cout << std::endl;
	}
	stack_pony.exercise();
	std::cout << std::endl;
}

void	ponyOnTheHeap(std::string p_name, std::string p_color)
{
	Pony *heap_pony = new Pony(p_name, p_color);
	
	std::cout << "\n=== This pony was allocated on the heap ===\n\n";
	for (int i = 0; i < 3; i++)
	{
		heap_pony->feed_poney();
		heap_pony->exercise();
		heap_pony->birthday();
		std::cout << std::endl;
	}
	heap_pony->exercise();
	std::cout << std::endl;
	delete heap_pony;
}

int		main()
{
	std::cout << "Call to ponyOnTheStack...\n" << ENDL;
	ponyOnTheStack("Pinkie Pie", "Pink");

	std::cout << std::endl << std::endl;

	std::cout << "Call to ponyOnTheHeap...\n\n";
	ponyOnTheHeap("Trixie", "Blue");
	return (0);
}
