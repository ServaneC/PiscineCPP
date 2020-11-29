/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:49 by schene            #+#    #+#             */
/*   Updated: 2020/11/29 16:18:31 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Buraucrat::Buraucrat(std::string const name, int grade) :
	_name(name), _grade(grade)
{
	if (_grade < 1)
		throw Buraucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Buraucrat::GradeTooLowException();
}

Buraucrat::Buraucrat(Buraucrat const & to_copy) :
	_name(to_copy.getName())
{
	*this = to_copy;
}

Buraucrat::~Buraucrat()
{

}

Buraucrat&	Buraucrat::operator=(Buraucrat const & rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

int			Buraucrat::getGrade() const
{
	return this->_grade;
}

std::string	Buraucrat::getName() const
{
	return this->_name;
}

void		Buraucrat::move_up()
{
	if ((_grade - 1)  < 1)
		throw Buraucrat::GradeTooHighException();
	else
		_grade--;
	return ;
}

void		Buraucrat::move_down()
{
	if ((_grade + 1) > 150)
		throw Buraucrat::GradeTooLowException();
	else
		_grade++;
	return ;
}

std::ostream&		operator<<(std::ostream & o, Buraucrat const & rhs)
{
	o << rhs.getName() << " is a buraucrat of grade " << rhs.getGrade() << std::endl;
	return o;
}