/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:27:01 by schene            #+#    #+#             */
/*   Updated: 2020/11/10 15:00:35 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP 

#include <iostream>

# define ERROR "\033[0;31m❌ "
# define GREEN "\033[0;32m"
# define MAG "\033[0;35m"
# define CYAN "\033[0;36m"
# define YELLOW "\033[0;93m"
# define ENDL "\033[0m\n"

class Pony
{
	private:
		std::string		name;
		int				age;
		std::string		color;
		int				hungry;
		int				level;
	
	public:
		Pony(std::string p_name, std::string p_color);
		~Pony();
		void	birthday();
		void	feed_poney();
		void	exercise();
};

#endif
