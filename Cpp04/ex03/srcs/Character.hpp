/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:22:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:09:50 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		std::string		_name;
		AMateria		*_inventory[4];

	public:
		Character(std::string name);
		Character(Character const & to_copy);
		~Character();

		Character &operator=(Character const &rhs);
		virtual std::string const & getName() const;
		virtual void 				equip(AMateria *m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);
};					

#endif