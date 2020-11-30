/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:22:57 by schene            #+#    #+#             */
/*   Updated: 2020/11/30 21:54:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & to_copy) :
	Form("PresidentialPardonForm", 25, 5), _target(to_copy._target)
{
	*this = to_copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::NotSigned();
	else
		std::cout << GREEN << this->_target << " has been pardoned by Zafod Beeblebrox." << END << std::endl;		
}
