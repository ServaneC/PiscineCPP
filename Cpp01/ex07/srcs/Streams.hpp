/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streams.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:56:08 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 12:58:10 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMS_HPP
# define STREAMS_HPP

# include <iostream>
# include <fstream>

# define ER_AC "Replace need a path to a file and two NOT empty strings."
# define ER_OPEN "The file couldn't be opened, please verify the path."
# define ER_CREATE "The file couldn't be created."
# define ER_EMPTY "One or both of the string are empty."
# define ERROR "\033[0;31m❌ Error: "
# define SUCCESS "\033[0;32m✅ "
# define ENDL "\033[0m\n"

class Streams
{
	private:
		std::string		name;
		std::ifstream	file;
		std::ofstream	replace;
		std::string		s1;
		std::string		s2;

	public:
		Streams(std::string filename, std::string str1, std::string str2);
		~Streams();
		int				error;
		void			replace_s1();
};

#endif