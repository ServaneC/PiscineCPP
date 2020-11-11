/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:43:22 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 11:37:29 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

# define ER_AC 0
# define ER_OPEN 1
# define ER_CREATE 2
# define ER_EMPTY 3
# define ERROR "\033[0;31m❌ Error: "
# define SUCCESS "\033[0;32m✅ "
# define ENDL "\033[0m\n"

int		print_error(int error);

#endif