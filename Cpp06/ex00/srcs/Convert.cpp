/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:25:32 by schene            #+#    #+#             */
/*   Updated: 2020/12/07 23:16:56 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


Convert::Convert(std::string to_convert) : _to_convert(to_convert), _type(UNDEF),
	_c_imp(false), _i_imp(false), _nan(false), _inf(false), _precision(1)
{
	_find_type();
	_print_output();
}

Convert::Convert(Convert const & to_copy)
{
	*this = to_copy;
}

Convert::~Convert()
{

}

Convert		&Convert::operator=(Convert const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_to_convert = rhs._to_convert;
	}
	return *this;
}

int			Convert::getType() const
{
	return this->_type;
}

int			Convert::_is_char() const
{
	if (this->_to_convert.size() == 1 && !std::isdigit(this->_to_convert[0]))
		return 1;
	return 0;
}

int			Convert::_is_int() const
{
	size_t i = 0;

	if (this->_to_convert[0] == '-' || this->_to_convert[0] == '+')
		i++;
	for (; i < this->_to_convert.size(); i++)
	{
		if (!std::isdigit(this->_to_convert[i]))
			return 0;
	}
	return 1;
}

int			Convert::_is_float()
{
	size_t i = 0;
	int pt = 0;

	if (this->_to_convert[0] == '-' || this->_to_convert[0] == '+')
		i++;
	if (this->_to_convert[this->_to_convert.size() - 1] == 'f')
	{
		if (!this->_to_convert.compare("-inff") ||
				!this->_to_convert.compare("+inff") ||
				!this->_to_convert.compare("inff"))
		{
			this->_inf = true;
			return 1;
		}
		if (!this->_to_convert.compare("nanf"))
		{
			this->_nan = true;
			return 1;
		}
		for (; i < (this->_to_convert.size() - 1); i++)
		{
			if (!std::isdigit(this->_to_convert[i]))
			{
				if (this->_to_convert[i] == '.' && pt == 0)
					pt++;
				else
					return 0;
			}
		}
		return 1;			
	}
	return 0;
}

int			Convert::_is_double()
{
	int pt = 0;
	size_t i = 0;

	if (this->_to_convert[0] == '-' || this->_to_convert[0] == '+')
		i++;
	if (!this->_to_convert.compare("-inf") ||
		!this->_to_convert.compare("+inf") ||
		!this->_to_convert.compare("inf"))
		this->_inf = true;
	else if (!this->_to_convert.compare("nan"))
		this->_nan = true;
	else if (std::atof(this->_to_convert.c_str()) == 0)
		return 0;
	else
	{
		for (; i < this->_to_convert.size(); i++)
		{
			if (!std::isdigit(this->_to_convert[i]))
			{
				if (this->_to_convert[i] == '.' && pt == 0)
					pt++;
				else
					return 0;
			}
		}
	}
	return 1;
}

void		Convert::_find_type()
{
	if (_is_char())
		this->_type = CHAR;
	else if (_is_int())
		this->_type = INT;
	else if (_is_float())
	{
		this->_type = FLOAT;
		_to_convert.erase(_to_convert.size() - 1, 1);
	}
	else if (_is_double())
		this->_type = DOUBLE;
	if (this->_type == FLOAT || this->_type == DOUBLE)
	{
		size_t 		point = _to_convert.find('.');
		std::string after_pt = _to_convert.substr(point + 1);
		while (after_pt[after_pt.size() - 1] == '0')
			after_pt.erase(after_pt.size() - 1, 1);
		this->_precision = after_pt.size();
	}
}

void	 Convert::_print_char(char c) const
{
	std::cout << "char: ";
	if (this->_c_imp)
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << '\'' << static_cast<char>(c) << '\'';
	std::cout << std::endl;
}

void	Convert::_print_int(int i) const
{
	std::cout << "int: ";
	if (this->_i_imp)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	Convert::_print_float(float f) const
{
	std::cout << "float: ";
	if (this->_nan)
		std::cout << "nan";
	else if (this->_inf)
	{
		if (this->_to_convert[0] == '-' || this->_to_convert[0] == '+')
			std::cout << this->_to_convert[0];
		std::cout << "inf";
	}
	else
		std::cout << std::setprecision(this->_precision) << std::fixed << f;
	std::cout << 'f' << std::endl;
}

void	Convert::_print_double(double d) const
{
	std::cout << "double: ";
	if (this->_nan)
		std::cout << "nan";
	else if (this->_inf)
	{
		if (this->_to_convert[0] == '-' || this->_to_convert[0] == '+')
			std::cout << this->_to_convert[0];
		std::cout << "inf";
	}
	else
		std::cout << std::setprecision(this->_precision) << std::fixed << d;
	std::cout << std::endl;
}



void	Convert::_print_output()
{
	if (this->_type == UNDEF)
		std::cout << "ERROR: The argument MUST BE a char, an int, a float or a double." << std::endl;
	if (this->_nan || this->_inf)
	{
		this->_c_imp = true;
		this->_i_imp = true;
	}
	if (this->_type == CHAR)
	{
		char c = this->_to_convert[0];
		_print_char(c);
		_print_int(static_cast<int>(c));
		_print_float(static_cast<float>(c));
		_print_double(static_cast<double>(c));
	}
	else if (this->_type == INT)
	{
		long int i = static_cast<long int>(std::atof(this->_to_convert.c_str()));
		if (i > CHAR_MAX || i < CHAR_MIN)
			this->_c_imp = true;
		if (i < INT_MIN || i > INT_MAX)
			this->_i_imp = true;
		_print_char(static_cast<char>(i));
		_print_int(static_cast<int>(i));
		_print_float(static_cast<float>(i));
		_print_double(static_cast<double>(i));
	}
	else if (this->_type == FLOAT || this->_type == DOUBLE)
	{
		double d = std::atof(this->_to_convert.c_str());
		if (d > CHAR_MAX || d < CHAR_MIN)
			this->_c_imp = true;
		if (d < INT_MIN || d > INT_MAX)
			this->_i_imp = true;
		_print_char(static_cast<char>(d));
		_print_int(static_cast<int>(d));
		_print_float(static_cast<float>(d));
		_print_double(d);
	}
}