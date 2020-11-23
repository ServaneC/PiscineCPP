/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:52:51 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:24:25 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();

	public:
		Peon(std::string s_name);
		Peon(const Peon & to_copy);
		~Peon();

		virtual void	getPolymorphed() const;
};

#endif