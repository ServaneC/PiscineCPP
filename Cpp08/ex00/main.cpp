/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:03:17 by schene            #+#    #+#             */
/*   Updated: 2020/12/20 10:34:55 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define END "\033[0m"

int main ()
{
	std::vector<int> 	v1(10, 0);

	std::cout << "vector = ";
	for (int i = 0; i < 10; i++)
	{
		v1[i] = i * 3;
		std::cout << v1[i] << ' ';
	}
	std::cout << std::endl << std::endl;

	for (int i = 0; i < 10; i++)
	{
		int nb = 12 + (i*2);
		std::vector<int>::iterator found = easyfind(v1, nb);
		if (found != v1.end())
			std::cout << GREEN  << *found << " is in the vector !" << END << std::endl;
		else
			std::cout << RED << nb << " is not in the vector..."<< END << std::endl;
		nb = 0;
	}
}