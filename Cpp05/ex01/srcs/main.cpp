/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:57 by schene            #+#    #+#             */
/*   Updated: 2020/12/03 10:41:50 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	try_move_up(Bureaucrat &b)
{
	try
	{
		b.move_up();
	}
	catch(std::exception const & e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

void	try_to_sign(Form *form, Bureaucrat b)
{
	try
	{
		form->beSigned(b);
	}	
	catch(std::exception const & e)
	{
		std::cerr << RED<< "ERROR: " << e.what() << END << std::endl;
	}
}

int main()
{
	Bureaucrat	Pierre("Pierre", 2);
	Bureaucrat	Paul("Paul", 136);
	Form		contract("Contract", 50, 100);
	Form		paper("Paper", 135, 100);
	
	std::cout << CYAN << Pierre << Paul << contract << paper << END << std::endl;
	try_to_sign(&contract, Paul);
	try_to_sign(&contract, Pierre);
	try_to_sign(&contract, Paul);
	try_to_sign(&paper, Paul);
	std::cout << CYAN << Paul << END;
	try_move_up(Paul);
	std::cout << CYAN << Paul << END;
	try_to_sign(&paper, Paul);
	return 0;
}