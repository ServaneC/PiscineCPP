/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:05:36 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 11:35:07 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include "Streams.hpp"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (print_error(ER_AC));
	
	Streams my_streams(av[1], av[2], av[3]);
	if (my_streams.error)
		return (1);
	else
		my_streams.replace_s1();
	return (0);
}