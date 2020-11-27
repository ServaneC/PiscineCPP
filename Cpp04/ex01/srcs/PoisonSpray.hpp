/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PoisonSpray.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:54:10 by schene            #+#    #+#             */
/*   Updated: 2020/11/27 13:22:49 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POISONSPRAY_HPP
# define POISONSPRAY_HPP

# include "AWeapon.hpp"

class PoisonSpray : public AWeapon
{
	public:
		PoisonSpray();
		PoisonSpray(const PoisonSpray & to_copy);
		virtual ~PoisonSpray();

		PoisonSpray	&	operator=(PoisonSpray const & rhs);
		void			attack() const;
};


#endif