/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:07:56 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:00:46 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

int main()
{
	memoryLeak();
	return (0);
}
