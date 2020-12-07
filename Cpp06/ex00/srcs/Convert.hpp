/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:25:48 by schene            #+#    #+#             */
/*   Updated: 2020/12/07 23:08:40 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <climits>
# include <iomanip>
# include <cstdlib> 
# include <string>

# define UNDEF 0
# define CHAR  1
# define INT   2
# define FLOAT 3
# define DOUBLE 4

class Convert
{
	private:
		Convert();
		std::string _to_convert;
		int 		_type;

		bool		_c_imp;
		bool		_i_imp;
		bool		_nan;
		bool		_inf;

		int			_precision;

		int			_is_char() const;
		int			_is_int() const;
		int			_is_float();
		int			_is_double();
		void		_find_type();
	
		void	 	_print_char(char c) const;
		void		_print_int(int i) const;
		void		_print_float(float f) const;
		void		_print_double(double d) const;
		void		_print_output();

	public:
		Convert(std::string to_convert);
		Convert(Convert const & to_copy);
		~Convert();

		Convert		&operator=(Convert const &rhs);
		int			getType() const;
};

#endif