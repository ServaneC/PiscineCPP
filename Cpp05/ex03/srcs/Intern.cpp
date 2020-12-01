/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:07:18 by schene            #+#    #+#             */
/*   Updated: 2020/12/01 22:43:58 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern & to_copy)
{
	*this = to_copy;
}

Intern::~Intern()
{

}

Intern	&	Intern::operator=(Intern & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Form		*Intern::makePresidentialPardon(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form		*Intern::makeRobotomyRequest(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form		*Intern::makeShrubberyCreation(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form		*Intern::makeForm(std::string name, std::string target) const
{
	
	std::string known_forms[] = {"presidential pardon", 
		"robotomy request", "shrubbery creation"};
	Form	*(*forms_ptr[])(std::string const &target)= {&Intern::makePresidentialPardon, 
		&Intern::makeRobotomyRequest, &Intern::makeShrubberyCreation};

	for (int i = 0; i < 3; i++)
	{
		if (known_forms[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return forms_ptr[i](target);
		}
	}
	std::cout << RED << "ERROR: " << name << " is not a known form." << END << std::endl;
	return nullptr;
}
