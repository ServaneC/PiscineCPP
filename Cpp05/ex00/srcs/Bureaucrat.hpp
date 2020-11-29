/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:54 by schene            #+#    #+#             */
/*   Updated: 2020/11/29 16:21:47 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURAUCRAT_HPP
# define BURAUCRAT_HPP

#include <iostream>

class Buraucrat
{
	private:
		Buraucrat();
		std::string	const	_name;
		int					_grade;

	public:
		Buraucrat(std::string const name, int grade);
		Buraucrat(Buraucrat const & to_copy);
		~Buraucrat();

		Buraucrat	&operator=(Buraucrat const & rhs);
		int			getGrade() const;
		std::string	getName() const;
		void		move_up();
		void		move_down();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The grade is too high !");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The grade is too low !");
				}
		};
};

std::ostream		&operator<<(std::ostream & o, Buraucrat const & rhs);

#endif
