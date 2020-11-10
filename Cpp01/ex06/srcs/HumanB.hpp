/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:28:50 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 17:46:31 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# define ATTACK "\033[0;31m🔪 "
# define ENDL "\033[0m\n"

class HumanB
{
	private:
		std::string		name;

	public:
		HumanB(std::string h_name);
		~HumanB();
		Weapon 	*weapon_b;
		void	attack();
		void	setWeapon(Weapon &h_weapon);
};

#endif