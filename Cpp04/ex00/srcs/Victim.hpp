/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:35:30 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:31:16 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	private:
		Victim();

	public:
		// Victim();
		Victim(std::string s_name);
		Victim(const Victim & to_copy);
		~Victim();

		std::string		name;

		virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream & o, const Victim &rhs);

#endif