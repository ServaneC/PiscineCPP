/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:53:57 by schene            #+#    #+#             */
/*   Updated: 2020/11/30 13:03:50 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

# define RED "\033[0;31m"
# define END "\033[0m"

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
	
	std::cout << Pierre << Paul << contract;
	try_to_sign(&contract, Paul);
	try_to_sign(&contract, Pierre);
	try_to_sign(&contract, Paul);
	try_to_sign(&paper, Paul);
	try_move_up(Paul);
	try_to_sign(&paper, Paul);
	return 0;
}