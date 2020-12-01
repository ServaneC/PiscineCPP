/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:58:34 by schene            #+#    #+#             */
/*   Updated: 2020/12/01 22:35:18 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const grade_to_sign, int const grade_to_exec) :
	_name(name), _signed(0), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	if (_grade_to_sign < 1 || _grade_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_to_sign > 150 || _grade_to_exec > 150)
	 	throw Form::GradeTooLowException();
}

Form::Form(Form const &to_copy) :
_name(to_copy._name), _grade_to_sign(to_copy._grade_to_sign), _grade_to_exec(to_copy._grade_to_exec)
{
	*this = to_copy;
}

Form::~Form()
{

}

Form	&	Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low !");
}

std::string	const	Form::getName() const
{
	return this->_name;
}

bool				Form::getSigned() const
{
	return this->_signed;
}

int					Form::getGradeToSign() const
{
	return this->_grade_to_sign;
}

int				Form::getGradeToExec() const
{
	return this->_grade_to_exec;
}

void				Form::beSigned(Bureaucrat signatory)
{
	if (signatory.getGrade() <= _grade_to_sign && !_signed)
	{
		_signed = 1;
		signatory.signForm(this->_name, "");
	}	
	else if (_signed)
		signatory.signForm(this->_name, "the form is already signed.");
	else
	{
		signatory.signForm(this->_name,"the bureaucrat grade is too low.");
		throw Form::GradeTooLowException();
	} 	
}

std::ostream		&operator<<(std::ostream & o, Form const & rhs)
{
	o << "The form " << rhs.getName();
	if (rhs.getSigned())
		o << " is signed, ";
	else
		o << " is not signed, ";
	o << "the grade required to signed it is " << rhs.getGradeToSign();
	o << " and " << rhs.getGradeToExec() << " to execute it" << std::endl;
	return o;
}
