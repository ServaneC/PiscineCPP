/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:43:01 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 11:16:58 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int		print_error(int error)
{
	if (error == ER_AC)
		std::cout << ERROR << "Replace need a path to a file and two NOT empty strings." << ENDL;
	else if (error == ER_OPEN)
		std::cerr << ERROR << "Error: the file couldn't be opened, please verify the path." << ENDL;
	else if (error == ER_CREATE)
		std::cerr << ERROR << "Error: the file couldn't be created." << ENDL;
	else if (error == ER_EMPTY)
		std::cerr << ERROR << "Error: one or both of the string are empty." << ENDL;
	return (1);
	
}