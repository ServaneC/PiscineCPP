/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:05:24 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 13:46:37 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
	private:
		int				_count;
		ISpaceMarine	**_units;

	public:
		Squad();
		Squad(const Squad & to_copy);
		virtual ~Squad();

		Squad	&operator=(const Squad & rhs);
		virtual int 			getCount() const;
		virtual ISpaceMarine*	getUnit(int n) const;
		virtual int 			push(ISpaceMarine*);
		void 					clean_squad();
};

#endif