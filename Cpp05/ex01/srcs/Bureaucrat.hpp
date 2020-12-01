/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:54 by schene            #+#    #+#             */
/*   Updated: 2020/12/01 22:32:18 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>

# define RED "\033[0;31m"
# define CYAN "\033[0;96m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

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
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream		&operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
