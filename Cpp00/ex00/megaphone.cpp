/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:55:11 by schene            #+#    #+#             */
/*   Updated: 2020/11/07 22:48:30 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int ac, char **av)
{
    int     i = 0;
    int     j;

    if (ac > 1)
    {
        while (++i < ac)
        {
            j = -1;
            while (av[i][++j])
                av[i][j] = toupper(av[i][j]);
            std::cout << av[i];
        }
    }
    else if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}