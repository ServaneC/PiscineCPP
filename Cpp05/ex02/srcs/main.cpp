/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:57 by schene            #+#    #+#             */
/*   Updated: 2020/12/03 10:44:47 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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

void	try_to_sign(Form *form, Bureaucrat b)
{
	try
	{
		form->beSigned(b);
	}	
	catch(std::exception const & e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

int main()
{
	Bureaucrat	Jean("Jean", 2);
	Bureaucrat	Pierre("Pierre", 145);
	PresidentialPardonForm	presidential("Luc");
	RobotomyRequestForm		robotrquest("Michel");
	ShrubberyCreationForm	bery("House");

	std::srand(std::time(NULL));
	std::cout << CYAN << Jean << Pierre << presidential
		 << robotrquest << bery << END << std::endl;
	try_to_sign(&bery, Pierre);
	Jean.executeForm(bery);

	try_to_sign(&robotrquest, Pierre);
	try_to_sign(&robotrquest, Jean);
	try_to_sign(&robotrquest, Pierre);
	Pierre.executeForm(robotrquest);
	Jean.executeForm(robotrquest);
	Jean.executeForm(robotrquest);
	Jean.executeForm(robotrquest);
	Jean.executeForm(robotrquest);

	try_to_sign(&presidential, Pierre);
	try_to_sign(&presidential, Jean);
	try_to_sign(&presidential, Jean);
	Jean.executeForm(presidential);
	return 0;
}