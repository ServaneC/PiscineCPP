/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:30:59 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 22:09:12 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fire_HPP
# define Fire_HPP

# include <iostream>
# include "ICharacter.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire(Fire const & to_copy);
		~Fire();

		Fire			&operator=(Fire const & rhs);
		AMateria*	 clone() const;
		void 		use(ICharacter& target);
};

#endif