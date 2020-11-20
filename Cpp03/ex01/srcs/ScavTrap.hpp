/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:02:12 by schene            #+#    #+#             */
/*   Updated: 2020/11/20 20:12:12 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <string>

# define S_GREEN "\033[0;92m💪 "
# define S_MAG "\033[0;95m😞 "
# define S_CYAN "\033[0;96m "
# define S_BLUE "\033[0;94m👵 "
# define S_YELLOW "\033[0;93m⚔️ "
# define S_GREY "\033[0;90m🔋 "
# define END "\033[0m"

# define HP 1
# define EN 2
# define HPEN 3

class ScavTrap
{
	private:
		ScavTrap();
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
		ScavTrap(std::string r_name);
		ScavTrap(const ScavTrap &to_copy);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &rhs);

		std::string	name;

		int 	rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);
};

#endif