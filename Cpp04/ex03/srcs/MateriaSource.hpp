/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:13:33 by schene            #+#    #+#             */
/*   Updated: 2020/11/25 20:39:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_inventory[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const & to_copy);
		virtual ~MateriaSource();

		MateriaSource		&operator=(MateriaSource const & rhs);
		virtual void 		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
};	

#endif
