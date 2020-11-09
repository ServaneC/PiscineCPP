/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:47:18 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 22:27:16 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		std::string horde_name;
		int			nb_zombies;
		int			nb_infections;
		Zombie		*horde;

	public:
		ZombieHorde(int n, std::string h_name);
		~ZombieHorde();
		void	annonce();
		static std::string	gen_name();
		void	infect_human();
};

#endif
