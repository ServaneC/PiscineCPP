/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:49 by schene            #+#    #+#             */
/*   Updated: 2020/12/01 22:26:08 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) :
	_name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & to_copy) :
	_name(to_copy.getName())
{
	*this = to_copy;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low !");
}

int			Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

void		Bureaucrat::move_up()
{
	if ((_grade - 1)  < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
	return ;
}

void		Bureaucrat::move_down()
{
	if ((_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
	return ;
}

std::ostream&		operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << " is a Bureaucrat of grade " << rhs.getGrade() << std::endl;
	return o;
}