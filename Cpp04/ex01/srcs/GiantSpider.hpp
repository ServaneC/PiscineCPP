/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GiantSpider.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:56:41 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 23:58:11 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GIANTSPIDER_HPP
# define GIANTSPIDER_HPP

#include "Enemy.hpp"

class GiantSpider : public Enemy
{
	public:
		GiantSpider();
		GiantSpider(GiantSpider const & to_copy);
		virtual ~GiantSpider();

		GiantSpider & operator=(GiantSpider const & rhs);
};

#endif