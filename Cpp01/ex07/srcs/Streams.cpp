/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streams.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:59:45 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 11:37:20 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streams.hpp"

Streams::Streams(std::string filename, std::string str1, std::string str2)
{
	error = 0;
	name = filename;
	file.open(filename);
	if (file)
	{
		filename.append(".replace");
		replace.open(filename);
		if (!replace)
			print_error(ER_CREATE);
	}
	else
		print_error(ER_OPEN);
	s1 = str1;
	s2 = str2;
	if (s1.empty() || s2.empty())
		print_error(ER_EMPTY);
	if (!file || !replace || s1.empty() || s2.empty())
		error = 1;
}

Streams::~Streams()
{
	file.close();
	replace.close();
}

void			Streams::replace_s1()
{
	std::string str;
	std::size_t pos;
	std::size_t str_pos;


	while (std::getline(file, str))
	{
		str_pos = 0;
		while ((pos = str.find(s1, str_pos)) != str.npos)
		{
			str.replace(pos, s1.length(), s2);
			str_pos = pos + s2.length();
		}	
		replace << str << '\n';
	}
	std::cout << SUCCESS << '[' << s1 << "] was successfully replace by [" << s2 << 
			"] in " << name << " and copy to " << name << ".replace !" << ENDL;
}