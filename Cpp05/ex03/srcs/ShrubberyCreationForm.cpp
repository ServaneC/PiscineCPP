/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:40:18 by schene            #+#    #+#             */
/*   Updated: 2020/12/03 10:57:20 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("shrubbery creation", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & to_copy) :
	Form("shrubbery creation", 145, 137), _target(to_copy._target)
{
	*this = to_copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::NotSigned();
	else
	{
		std::string filename = (this->_target + "_shrubbery");
		std::ofstream tree(filename.c_str());
		tree << "                         (***)" << std::endl;
		tree << "   (***)               (*******)" << std::endl;
		tree << "  (*****)             (*********)" << std::endl;
		tree << " (*******)   (***)      (*****)" << std::endl;
		tree << "   (***)    (*****)      (***)" << std::endl;
		tree << "     $       (***)         $" << std::endl;
		tree << "     $         $           $" << std::endl;
		tree << "################################" << std::endl;
		tree << std::endl;
	}
}
