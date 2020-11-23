/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:48:52 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:23:55 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		Sorcerer();

	public:
		Sorcerer(std::string s_name, std::string s_title);
		Sorcerer(const Sorcerer & to_copy);
		~Sorcerer();

		std::string		name;
		std::string		title;

		void polymorph(Victim const &) const;
};

std::ostream	&operator<<(std::ostream & o, const Sorcerer &rhs);

#endif