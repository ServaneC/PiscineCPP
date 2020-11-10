/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:05:30 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:02:35 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		double	weight;
		int		qi;

	public:
		Brain();
		Brain(double b_weight, int b_qi);
		~Brain();
		std::string identify(void) const;
};

#endif
