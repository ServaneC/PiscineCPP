/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:03:17 by schene            #+#    #+#             */
/*   Updated: 2020/11/26 10:12:41 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		SuperTrap();

	public:
		SuperTrap(std::string r_name);
		SuperTrap(const SuperTrap &to_copy);
		~SuperTrap();
		SuperTrap	&operator=(SuperTrap const &rhs);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
};

#endif 
