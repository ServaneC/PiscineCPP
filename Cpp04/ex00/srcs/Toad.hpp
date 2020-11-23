/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Toad.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 23:49:03 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 00:01:07 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOAD_HPP
# define TOAD_HPP

# include <iostream>
# include "Victim.hpp"

class Toad : public Victim
{
	private:
		Toad();

	public:
		Toad(std::string s_name);
		Toad(const Toad & to_copy);
		virtual ~Toad();

		virtual void	getPolymorphed() const;
		Toad	&		operator=(Toad const & rhs);
};

#endif