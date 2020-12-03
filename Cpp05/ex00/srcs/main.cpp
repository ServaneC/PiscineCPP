/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:57 by schene            #+#    #+#             */
/*   Updated: 2020/12/03 11:03:00 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

# define RED "\033[0;31m"
# define GREY "\033[0;90m"
# define END "\033[0m"

void	try_move_up(Bureaucrat &b)
{
	try
	{
		b.move_up();
	}
	catch(std::exception const & e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

void	try_move_down(Bureaucrat &b)
{
	try
	{
		b.move_down();
	}
	catch(std::exception const & e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

int main()
{
	Bureaucrat Pierre("Pierre", 2);
	Bureaucrat Paul("Paul", 136);
	Bureaucrat Jacque(Pierre); //we use the copy constructor
	
	std::cout << GREY << "Trying to create a new bureaucrat with a grade of 0..." << END << std::endl;
	try
	{
		Bureaucrat Jean("Jean", 0);
		std::cout << Jean << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}

	std::cout << GREY << "Trying  create a new bureaucrat with a grade of 151..." << END << std::endl;
	try
	{
		Bureaucrat Michel("Michel", 151);
		std::cout << Michel << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}

	std::cout << GREY << "------------------------------------------" << END << std::endl;

	std::cout << Pierre << Paul;
	std::cout << GREY << "This is a copy of Pierre:" << END << std::endl;
	std::cout << Jacque;
	std::cout << GREY << "------------------------------------------" << END << std::endl;

	std::cout << GREY << "Try to decrement the grade of Pierre a bunch of time:" << END << std::endl;
	for (int i = 0; i < 3; i++)
	{
		
		try_move_up(Pierre);
		std::cout << Pierre;
	}
	std::cout << GREY << "------------------------------------------" << END << std::endl;

	std::cout << GREY << "Try to increment the grade of Paul a bunch of time:" << END << std::endl;
	for (int i = 0; i < 15; i++)
	{
		try_move_down(Paul);
		std::cout << Paul;
	}
	std::cout << GREY << "------------------------------------------" << END << std::endl;
	std::cout << GREY << "Pierre = Paul " << END << std::endl;
	Pierre = Paul;
	std::cout << Pierre << Paul;
	return 0;
}