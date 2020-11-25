/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:50:32 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:10:10 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	private:
		AMateria();
		std::string		_type;
		unsigned int	_xp;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & to_copy);
		virtual ~AMateria();

		AMateria			&operator=(AMateria const & rhs);
		std::string const & getType() const;
		unsigned int 		getXP() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};	

#endif	