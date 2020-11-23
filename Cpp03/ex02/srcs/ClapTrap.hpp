/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:52:01 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 11:59:15 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define RED "\033[0;31m💤 "
# define GREEN "\033[0;92m💪 "
# define MAG "\033[0;95m😞 "
# define CYAN "\033[0;96m👉 "
# define BLUE "\033[0;94m"
# define YELLOW "\033[0;93m⚔️ "
# define GREY "\033[0;90m🔋 "
# define END "\033[0m"

# define HP 1
# define EN 2
# define HPEN 3

class ClapTrap
{
	protected:
		int			hit_pts;
		int			max_hit_pts;
		int			energy;
		int			max_energy;
		int			level;
		int			melee_dmg;
		int			ranged_dmg;
		int			armordmg_red;
	public:
		ClapTrap();
		ClapTrap(int hp, int mxhp, int nrj, int mxnrj, int lvl, int meldmg, \
			int rgddmg, int armred, std::string r_name);
		ClapTrap(const ClapTrap &to_copy);
		~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &rhs);

		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		void	print_hp_energy(int print);
		std::string const	rand_action(const std::string *quotes, unsigned int const arraysize);
		std::string	name;
};

#endif
