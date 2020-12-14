/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:50:20 by schene            #+#    #+#             */
/*   Updated: 2020/12/14 11:28:04 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	display_float(float const &f)
{
	std::cout << "I'm a float with a value of " << f << std::endl;
}

template <typename T>
void	display(T const &a)
{
	std::cout <<  "I'm type T in a template with a value of " << a << std::endl;
}

int main()
{
	float f_array[5] = {1.3, 2.9, 8.5, 4.7, 9.3};

	iter<float>(f_array, 5, &display_float);
	iter<float>(f_array, 5, &display<float>);
	return 1;
}
