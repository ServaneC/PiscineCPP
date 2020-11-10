/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:05:05 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:02:39 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain	brain;

public:
	Human();
	~Human();
	const Brain	&getBrain(void);
	std::string	identify(void);
};

#endif
