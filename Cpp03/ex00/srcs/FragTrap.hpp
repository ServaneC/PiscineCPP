/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:38:41 by schene            #+#    #+#             */
/*   Updated: 2020/11/20 11:09:33 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <string>

# define RED "\033[0;31m💤 "
# define GREEN "\033[0;92m💪 "
# define MAG "\033[0;95m😞 "
# define CYAN "\033[0;96m🦯"
# define BLUE "\033[0;94m👴 "
# define YELLOW "\033[0;93m⚔️ "
# define GREY "\033[0;90m🔋 "
# define END "\033[0m"

# define HP 1
# define EN 2
# define HPEN 3

class FragTrap
{
	private:
		FragTrap();
		int			hit_pts;
		int			max_hit_pts;
		int			energy;
		int			max_energy;
		int			level;
		int			melee_dmg;
		int			ranged_dmg;
		int			armordmg_red;
		void		print_hp_energy(int print);

	public:
		FragTrap(std::string r_name);
		FragTrap(const FragTrap &to_copy);
		~FragTrap();
		FragTrap	&operator=(FragTrap const &rhs);

		std::string	name;

		int 	rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		int		vaulthunter_dot_exe(std::string const & target);
};

#endif