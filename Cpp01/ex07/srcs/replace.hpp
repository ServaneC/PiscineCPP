/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:43:22 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 12:23:42 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

# define ER_AC "Replace need a path to a file and two NOT empty strings."
# define ER_OPEN "The file couldn't be opened, please verify the path."
# define ER_CREATE "The file couldn't be created."
# define ER_EMPTY "One or both of the string are empty."
# define ERROR "\033[0;31m❌ Error: "
# define SUCCESS "\033[0;32m✅ "
# define ENDL "\033[0m\n"

int		print_error(std::string  error);

#endif