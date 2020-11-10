/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:28:46 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 17:19:01 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# define ATTACK "\033[0;31m🔪 "
# define ENDL "\033[0m\n"

class HumanA
{
	private:
		std::string		name;

	public:
		HumanA(std::string h_name, Weapon &h_weapon);
		~HumanA();
		Weapon 	&weapon_a;
		void	attack();
};

#endif