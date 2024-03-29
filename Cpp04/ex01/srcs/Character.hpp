/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:11:16 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:23 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;

	public:
		Character(std::string const & name);
		Character(Character const & to_copy);
		~Character();

		Character	&operator=(Character const & rhs);
		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
