/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:22:51 by schene            #+#    #+#             */
/*   Updated: 2020/11/08 00:07:59 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

static int      nb_contact;
static Contact  phonebook[8];

int     add_contact()
{
    if (nb_contact == 8)
    {
        std::cout << "\n❌ \033[0;31mThere is already 8 contacts, i can't take more sorry !\033[0m\n";
        return (0);
    }
    phonebook[nb_contact].fill_fields();
    nb_contact++;
    std::cout << "\nThere is now " << nb_contact << " contact in the phonebook\033[0m\n";
    return (1);
}

int    list_phonebook()
{
    std::cout << "\033[0;33m---------------------------------------------\n";
    std::cout << "|" << std::setw(10) << "Index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last Name";
    std::cout << "|" << std::setw(10) << "Login" << "|\n";
    std::cout << "---------------------------------------------\n";
    for (int i = 0; i < nb_contact; i++)
        phonebook[i].search_info(i);
    return (1);
}

int     search_contact()
{
    int index = -1;

    if (nb_contact > 0)
    {
        list_phonebook();
        std::cout << "\033[0m\n\nEnter the index of the one you want to see: ";
        std::cin >> index;
        if (index >= 0 && index < nb_contact)
            phonebook[index].aff_contact();
        else
        {
            std::cout << "\n❌ \033[0;31mThis is not a valid index\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return (search_contact());
        }
    }
    else
        std::cout << "\033[0;31mThe PhoneBook is currently empty, please ADD some contact before searching again\033[0m\n";
    return (1);
}

void    ask_cmd()
{
    std::string cmd;

    while (1)
    {
        std::cout << "\n\033[0;32mPlease enter one of the following command:\n";
        std::cout << "\t- ADD to create a new contact\n";
        std::cout << "\t- SEARCH to list your contacts and read one contact info\n";
        std::cout << "\t- EXIT if you want to leave me and loose everything (like your ex)\033[0m\n";
        std::cout << "\nEnter your command here: ";
        std::cin >> cmd;
        if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0 )
            add_contact();
        else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0 )
            search_contact();
        else if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0 )
        {
            std::cout << "\033[0;36mSo just like that you're leaving me 😢\033[0m\n";
            exit(1);
        }
            
        else
        {
            std::cout << "\033[0;31m❌ " << cmd << " is not a valid command !!! Are you dumb ?\033[0m\n";
            ask_cmd();
        }
    }
}

int     main()
{
    std::cout << "\033[0;33mHi ! I am The Useless PhoneBook.\nI can store up to 8 contact info !!!\n";
    std::cout << "But when you EXIT i will forget them all, that's why I'm called USELESS (like you)\033[0m\n";
    ask_cmd();
    return (1);
}