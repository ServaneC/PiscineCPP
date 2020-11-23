/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:38:41 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:45:39 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();

	public:
		FragTrap(std::string r_name);
		FragTrap(const FragTrap &to_copy);
		~FragTrap();
		FragTrap	&operator=(FragTrap const &rhs);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		int		vaulthunter_dot_exe(std::string const & target);
};

#endif
