/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:03:20 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:01:51 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	
	public:
		void	setZombieType(std::string z_type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();
};

#endif
