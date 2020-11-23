/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:33:23 by schene            #+#    #+#             */
/*   Updated: 2020/11/23 20:57:45 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, "default")
{
	std::cout << BLUE << "👩 A nurse came to see if everything is ok" << END << std::endl;
	print_hp_energy(HPEN);
}

NinjaTrap::NinjaTrap(std::string r_name) : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, r_name)
{
	std::cout << BLUE << "👩‍ A nurse named " << name << " came to see if everything is ok" << END << std::endl;
	print_hp_energy(HPEN);
}

NinjaTrap::NinjaTrap(const NinjaTrap &to_copy)  : ClapTrap(to_copy)
{
	*this = to_copy;
	std::cout << BLUE << "👩‍ A nurse named " << name << " came to see if everything is ok" << END << std::endl;
	return;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << BLUE << "👩‍ " << name << " the nurse, left the room." << END << std::endl;
	print_hp_energy(HPEN);
	return;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	if (this != &rhs)
	{
		this->hit_pts = rhs.hit_pts;
		this->max_hit_pts = rhs.max_hit_pts;
		this->energy = rhs.energy;
		this->max_energy = rhs.max_energy;
		this->level = rhs.level;
		this->melee_dmg = rhs.melee_dmg;
		this->ranged_dmg = rhs.ranged_dmg;
		this->armordmg_red = rhs.armordmg_red;
	}
	std::cout << BLUE << "👩‍ A nurse named " << name << " came to see if everything is ok" << END << std::endl;
	return *this;
}

int		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << CYAN << "The nurse " << name << " throw the med cart on " << target 
		<< " from the other side of the room, causing " << ranged_dmg << " points of damage!" << END << std::endl;
	return (ranged_dmg);
}

int 	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << CYAN << "The nurse "<< name << " spill a cup of hot tea on " << target <<
		 ", causing " << melee_dmg << " points of damage!" << END << std::endl;
	return(melee_dmg);
}

void		NinjaTrap::ninjaShoebox(ClapTrap & someone)
{
	int 	response = rand() % 2;

	std::cout << D_GREEN << name << " try to attack  " << someone.name << "...";
	if (response)
		std::cout << someone.name << " dodged the attack!" << END << std::endl;
	else
	{
		std::cout << someone.name << " did not have enough reflex and ..." << END << std::endl;
		someone.takeDamage(rangedAttack(someone.name));
	}
}

void		NinjaTrap::ninjaShoebox(FragTrap & grandpa)
{
	int		response = rand() % 2;

	std::cout << D_GREEN << name << " offer some soup to grandpa " << grandpa.name << "...";
	if (response)
	{
		std::cout << grandpa.name << " accepted the offer 🎉 !" << END << std::endl;
		grandpa.beRepaired(10);
	}
	else
		std::cout << grandpa.name << " kindly decline the offer." << END << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & grandma)
{
	int		response = rand() % 2;

	std::cout << D_GREEN << name << " hid the tv remote from " << grandma.name << " during her favorite tv show...";
	if (response)
		std::cout << grandma.name << " found it, evreything is ok !" << END << std::endl;
	else
	{
		std::cout << MAG << grandma.name << " couldn't find it, and threw a temper tantrum !" << END << std::endl;
		grandma.takeDamage(10);
	}
}

void		NinjaTrap::ninjaShoebox(NinjaTrap & nurse)
{
	int		response = rand() % 2;

	std::cout << D_GREEN << name << " ask her colleague " << nurse.name << " if she could take her next shift...";
	if (response)
	{
		std::cout << nurse.name << " accepted and " << name << " gave her some soup to thank her." << END << std::endl;
		nurse.beRepaired(10);
	}
	else
	{
		std::cout << nurse.name << " say that she had other plan, " << name << " got mad and..." << END << std::endl;
		nurse.takeDamage(meleeAttack(nurse.name));
	}
}
