/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:54 by schene            #+#    #+#             */
/*   Updated: 2020/11/30 12:51:05 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>

class Bureaucrat
{
	private:
		Bureaucrat();
		std::string	const	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & to_copy);
		~Bureaucrat();

		Bureaucrat	&		operator=(Bureaucrat const & rhs);
		int					getGrade() const;
		std::string	const	getName() const;
		void				move_up();
		void				move_down();
		void				signForm(std::string form, std::string reason) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Bureaucrat grade is too high !");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Bureaucrat grade is too low !");
				}
		};
};

std::ostream		&operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
