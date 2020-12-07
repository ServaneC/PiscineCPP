/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:28:34 by schene            #+#    #+#             */
/*   Updated: 2020/12/04 14:53:51 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "The program take ONE argument."<< std::endl;
		return 0;
	}
	Convert  our_type(av[1]);
	return 1;
}