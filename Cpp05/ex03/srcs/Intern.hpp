/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:07:16 by schene            #+#    #+#             */
/*   Updated: 2020/12/01 22:14:08 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		static Form		*makePresidentialPardon(std::string const &target);
		static Form		*makeRobotomyRequest(std::string const &target);
		static Form		*makeShrubberyCreation(std::string const &target);

	public:
		Intern();
		Intern(Intern & to_copy);
		virtual ~Intern();

		Intern	&	operator=(Intern & rhs);
		Form		*makeForm(std::string name, std::string const target) const;
		
};

#endif
