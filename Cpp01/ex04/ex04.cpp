/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 22:51:46 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 23:01:30 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << "Using the pointer...\n" << *ptr << std::endl;
	std::cout << "Using the reference...\n" << ref << std::endl;
}