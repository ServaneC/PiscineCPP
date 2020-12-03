/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:57 by schene            #+#    #+#             */
/*   Updated: 2020/12/03 10:44:52 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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
	Intern someRandomIntern;
	std::srand(std::time(NULL));
	
	Form* robot= someRandomIntern.makeForm("robotomy request", "Bender");
	Form* pardon= someRandomIntern.makeForm("presidential pardon", "Robert");
	Form* castle= someRandomIntern.makeForm("shrubbery creation", "Castle");
	Form* random;
	
	random = someRandomIntern.makeForm("random form", "test");

	try_to_sign(robot, Jean);
	try_to_sign(pardon, Jean);
	try_to_sign(castle, Jean);
	Jean.executeForm(*castle);
	Jean.executeForm(*pardon);
	Jean.executeForm(*robot);

	delete robot;
	delete pardon;
	delete castle;
	return 0;
}