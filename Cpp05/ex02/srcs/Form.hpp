/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:49:55 by schene            #+#    #+#             */
/*   Updated: 2020/12/01 22:36:55 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		Form();
		std::string	const	_name;
		bool				_signed;
		int	const			_grade_to_sign;
		int	const			_grade_to_exec;

	public:
		Form(std::string const name, int const grade_to_sign, int const grade_to_exec);
		Form(Form const &to_copy);
		virtual ~Form();

		Form	&			operator=(Form const &rhs);
		std::string	const	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		void				beSigned(Bureaucrat signatory);
		virtual void		execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class NotSigned : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream		&operator<<(std::ostream & o, Form const & rhs);

#endif
