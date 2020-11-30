/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:35:30 by schene            #+#    #+#             */
/*   Updated: 2020/11/30 22:00:59 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & to_copy) :
	Form("RobotomyRequestForm", 72, 45), _target(to_copy._target)
{
	*this = to_copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void				RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int i = std::rand() % 2;

	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::NotSigned();
	else
	{
		std::cout << BLUE << "driiiillll driiiiilll drill" << std::endl;
		if (i)
			std::cout << "🤖 " << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "❌ The Robotomy Request for " << this->_target << " FAILED !" << std::endl;
	}
}	
