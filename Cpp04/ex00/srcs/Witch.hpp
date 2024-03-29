/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Witch.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:58:31 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 13:42:40 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WITCH_HPP
# define WITCH_HPP

# include "Sorcerer.hpp"

class Witch : public Sorcerer
{
	private:
		Witch();

	public:
		Witch(std::string const s_name, std::string const s_title);
		Witch(const Witch & to_copy);
		virtual ~Witch();

		Witch	&	operator=(Witch const & rhs);
		void		make_potion();
};

std::ostream	&operator<<(std::ostream & o, const Witch &rhs);

#endif