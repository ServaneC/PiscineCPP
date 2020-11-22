/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:02:12 by schene            #+#    #+#             */
/*   Updated: 2020/11/22 01:04:54 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();

	public:
		ScavTrap(std::string r_name);
		ScavTrap(const ScavTrap &to_copy);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &rhs);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void	challengeNewcomer(std::string const & target);
};

#endif
