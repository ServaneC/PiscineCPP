/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:35:30 by schene            #+#    #+#             */
/*   Updated: 2020/11/24 00:05:25 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

# define GREEN "\033[0;32m🐊 "
# define B_GREEN "\033[0;92m🐸 "
# define MAG "\033[0;35m🔮 "
# define B_MAG "\033[0;95m🧹 "
# define CYAN "\033[0;96m✨ "
# define BLUE "\033[0;94m🧪 "
# define YELLOW "\033[0;93m"
# define END "\033[0m"

class Victim
{
	private:
		Victim();

	public:
		Victim(std::string s_name);
		Victim(const Victim & to_copy);
		virtual ~Victim();

		std::string		name;

		Victim	&		operator=(Victim const & rhs);
		virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream & o, const Victim &rhs);

#endif