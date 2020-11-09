/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:56:11 by schene            #+#    #+#             */
/*   Updated: 2020/11/09 21:32:34 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

# define TALK "\033[0;33m🧠 "
# define DEAD "\033[0;31m🤯 "
# define EAT "\033[0;34m🩸 "
# define ENDL "\033[0m\n"

class Zombie
{
	private:
		std::string		name;
		std::string		type;
		int				victims;

	public:
		Zombie();
		Zombie(std::string z_name, std::string z_type);
		~Zombie();
		void	announce();
		void	eat_someone();
};

#endif