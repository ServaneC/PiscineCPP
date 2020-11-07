/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:08:09 by schene            #+#    #+#             */
/*   Updated: 2020/11/07 19:14:13 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void	Contact::fill_fields()
{
    std::cout << "\033[0;36mFirst Name: ";
    std::cin >> first_name;
    std::cout << "Last Name: ";
    std::cin >> last_name;
    std::cout << "Nickname: ";
	std::cin >> nickname;
    std::cout << "Login: ";
    std::cin >> login;
    std::cout << "Postal Adress ";
    std::cin >> postal_address;
    std::cout << "Email Adress: ";
    std::cin >> email;
    std::cout << "Phone Number: ";
    std::cin >> phone_nb;
    std::cout << "Birthday Date: ";
    std::cin >> birthday;
    std::cout << "Favorite Meal: ";
    std::cin >> fav_meal;
    std::cout << "Underwear Color: ";
    std::cin >> underwear_color;
    std::cout << "Darkest Secret: ";
    std::cin >> secret;
}

void	Contact::aff_contact()
{
	std::cout << "\n\033[0;36mFirst Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Login: " << login << std::endl;
    std::cout << "Postal Adress " << postal_address << std::endl;
    std::cout << "Email Adress: " << email << std::endl;
    std::cout << "Phone Number: " << phone_nb << std::endl;
    std::cout << "Birthday Date: " << birthday << std::endl;
    std::cout << "Favorite Meal: " << fav_meal << std::endl;
    std::cout << "Underwear Color: " << underwear_color << std::endl;
    std::cout << "Darkest Secret: " << secret << "\033[0m\n";
}

std::string		resize_string(std::string my_string)
{
	if (my_string.length() > 10)
	{
		my_string.resize(9);
		my_string.append(".");
	}
	return (my_string);
}

void			Contact::search_info(int index)
{
	std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << resize_string(first_name);
    std::cout << "|" << std::setw(10) << resize_string(last_name);
    std::cout << "|" << std::setw(10) << resize_string(login) << "|\n";
}