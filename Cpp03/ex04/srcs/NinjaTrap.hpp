/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:26:47 by schene            #+#    #+#             */
/*   Updated: 2020/11/22 14:37:38 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string r_name);
		NinjaTrap(const NinjaTrap &to_copy);
		~NinjaTrap();
		NinjaTrap	&operator=(NinjaTrap const &rhs);


		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void	ninjaShoebox(ClapTrap & someone);
		void	ninjaShoebox(FragTrap & grandpa);
		void	ninjaShoebox(ScavTrap & grandma);
		void	ninjaShoebox(NinjaTrap & nurse);
		
};

#endif