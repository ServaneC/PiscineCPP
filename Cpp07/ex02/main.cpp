/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 11:39:01 by schene            #+#    #+#             */
/*   Updated: 2020/12/11 13:42:40 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "----------- TEST w/ an array of char -----------" << std::endl << std::endl;

	Array<char> char_array(5);
	char		assign = 'a';

	std::cout << "size of char_array = " << char_array.size() << std::endl;
	for (int i = 0; i < 10; i++)
	{
		try
		{
			std::cout << "try to assign and print char_array[" << i << "] -> ";
			char_array[i] = assign++;
			std::cout << char_array[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	std::cout << std::endl;

	std::cout << "----------- TEST w/ an empty array -----------" << std::endl << std::endl;

	Array<char> empty_array;

	std::cout << "size of empty array = " << empty_array.size() << std::endl;
	try
	{
		std::cout << "try to print empty array[0]... ";
		std::cout << empty_array[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "----------- TEST w/ the = operator -----------" << std::endl << std::endl;

	std::cout << "size of empty array = " << empty_array.size() << std::endl;
	std::cout << "size of char_array = " << char_array.size() << std::endl;

	std::cout << "empty array = char_array" << std::endl;
	empty_array = char_array;

	std::cout << "size of empty array = " << empty_array.size() << std::endl;
	std::cout << "size of char_array = " << char_array.size() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			std::cout << "assigning and print empty_array [" << i << "] ->\t";
			empty_array[i] = assign++;
			std::cout << empty_array[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			std::cout << "char_array[" << i << "] -> ";
			std::cout << char_array[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	return 0;
}
