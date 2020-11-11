/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Streams.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:56:08 by schene            #+#    #+#             */
/*   Updated: 2020/11/11 11:29:02 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMS_HPP
# define STREAMS_HPP

# include <fstream>
# include "replace.hpp"

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