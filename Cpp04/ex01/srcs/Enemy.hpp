/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:12:07 by schene            #+#    #+#             */
/*   Updated: 2020/11/27 13:20:17 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream> 
# define GREY "\033[0;90m"
# define GREEN "\033[0;92m"
# define END "\033[0m"

class Enemy
{
	private:
		Enemy();
		int			_hp;
		std::string	_type;

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & to_copy);
		virtual ~Enemy();

		Enemy		&	operator=(Enemy const & rhs);
		std::string		getType() const;
		int 			getHP() const;
		virtual void	takeDamage(int);
};

std::ostream	&operator<<(std::ostream &o, Enemy const &rhs);

#endif