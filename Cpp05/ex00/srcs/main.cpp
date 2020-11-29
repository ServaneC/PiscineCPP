/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:57 by schene            #+#    #+#             */
/*   Updated: 2020/11/29 16:33:57 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;92m"
# define MAG "\033[0;95m"
# define CYAN "\033[0;96"
# define BLUE "\033[0;94m"
# define YELLOW "\033[0;93m⚔"
# define GREY "\033[0;90m"
# define END "\033[0m"

void	try_move_up(Buraucrat &b)
{
	try
	{
		b.move_up();
	}
	catch(const Buraucrat::GradeTooHighException& e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

void	try_move_down(Buraucrat &b)
{
	try
	{
		b.move_down();
	}
	catch(const Buraucrat::GradeTooLowException& e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

int main()
{
	Buraucrat Pierre("Pierre", 2);
	Buraucrat Paul("Paul", 136);
	Buraucrat Jacque(Pierre); //we use the copy constructor
	
	std::cout << Pierre << Paul;
	std::cout << GREY << "Jacque is a copy of Pierre:" << END << std::endl;
	std::cout << Jacque;

	std::cout << GREY << "Try to decrement the grade of Pierre a bunch of time:" << END << std::endl;
	for (int i = 0; i < 3; i++)
	{
		
		try_move_up(Pierre);
		std::cout << Pierre;
	}
	std::cout << GREY << "Try to increment the grade of Paul a bunch of time:" << END << std::endl;
	for (int i = 0; i < 15; i++)
	{
		try_move_down(Paul);
		std::cout << Paul;
	}
	std::cout << GREY << "Pierre = Paul " << END << std::endl;
	Pierre = Paul;
	std::cout << Pierre << Paul;
	return 0;
}