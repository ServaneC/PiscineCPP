/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:52:35 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 16:08:31 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

# define RED "\033[0;31m"
# define D_GREEN "\033[0;32m"
# define GREEN "\033[0;92m"
# define MAG "\033[0;95m"
# define CYAN "\033[0;96m"
# define BLUE "\033[0;94m"
# define YELLOW "\033[0;93m"
# define GREY "\033[0;90m"
# define END "\033[0m"

class AWeapon
{
	private:
		AWeapon();
		std::string	name;
		int			dmg;
		int			ap_cost;
		
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon & to_copy);
		virtual ~AWeapon();

		AWeapon	&		operator=(AWeapon const & rhs);

		std::string		getName() const;
		int 			getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};	

#endif