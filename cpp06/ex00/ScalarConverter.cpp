/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:49:02 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/28 17:08:18 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <cctype>
# include <iostream>
# include <limits>
# include <iomanip>
# include <cstdlib>

bool _char = false;
bool _int = false;
bool _float = false;
bool _double = false;


ScalarConverter::ScalarConverter(void)
{
	std::cout << "Default Constructor Called ScalarConverter" << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "Destructor Called ScalarConverter" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &rhs)
{
	std::cout << "Copy Constructor Called ScalarConverter" << std::endl;
	*this = rhs;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs)
{
	std::cout << "Copy assignment operator called ScalarConverter" << std::endl;
	if (this != &rhs)
	{
		//nothing to copy here
	}
	return (*this);
}

bool	isChar(std::string str)
{
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		return (true);
	return (false);
}

bool	checkInput(std::string str)
{
	bool	hasDigit = false;
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (false);
	while (str[i] >= '0' && str[i] <= '9')
	{
		hasDigit = true;
		i++;
	}
	if (str[i] == '.')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		hasDigit = true;
		i++;
	}
	if (!str[i] || (str[i] == 'f' && i == static_cast<int>(str.length() - 1)))
	{ 
		if (!hasDigit)
			return (false);
		return (true);
	}
	return (false);
}

char	convertChar(std::string input)
{
	_char = true;
	if (input.size() == 1 && isChar(input) == true)
		return (static_cast<char>(input[0]));
	if (input.size() >= 1 && checkInput(input))
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<char>::max() || var <= 0)
			return (_char = false, -1);
		unsigned char c = static_cast<unsigned char>(var);
		if (std::isprint(c) != 0)
			return(c);
	}
	return (0);
}

int		convertInt(std::string input)
{
	_int = true;
	if (isChar(input))
		return (static_cast<int>(input[0]));
	if (input.size() >= 1 && checkInput(input))
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<int>::max() || var < std::numeric_limits<int>::min())
			return (_int = false, 0);
		else 
			return (static_cast<int>(var));
	}	
	return (_int = false, 0);
}

float	convertFloat(std::string input)
{
	_float = true;
	if (isChar(input))
		return (static_cast<float>(input[0]));
	if (input.size() >= 1 && checkInput(input))
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<float>::max() || var < -std::numeric_limits<float>::max())
			return (_float = false, 0);
		else 
			return (static_cast<float>(var));
	}
	return (_float = false, 0);
}

double	convertDouble(std::string input)
{
	_double = true;
	if (isChar(input))
		return (static_cast<double>(input[0]));
	if (input.size() >= 1 && checkInput(input))
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<double>::max() || var < -std::numeric_limits<double>::max())
			return (_double = false, 0);
		else 
			return (static_cast<double>(var));
	}
	return (_double = false, 0);
}

void	ScalarConverter::convert(std::string input)
{
	if((input.compare("+inff") == 0) || (input.compare("+inf") == 0))
	{
		std::cout << input << std::endl;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "+inff" << std::endl;
		std::cout << "double: " << "+inf" << std::endl;
		return ;
	}
	if ((input.compare("-inff") == 0) || (input.compare("-inf") == 0))
	{
		std::cout << input << std::endl;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
		return ;
	}
	if ((input.compare("nanf") == 0) || (input.compare("nan") == 0))
	{
		std::cout << input << std::endl;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return ;
	}
	else if ((!checkInput(input) && !isChar(input)))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}

	char c = convertChar(input);
	int i = convertInt(input);
	float f = convertFloat(input);
	double d = convertDouble(input);

	if (c == 0)
		std::cout << "char:\t\tNon displayable" << std::endl;
	else if (c == -1 && _char == false)
		std::cout << "char:\t\timpossible" << std::endl;
	else
		std::cout << "char:\t\t" << c << std::endl;
	
	if (_int == false)
		std::cout << "int:\t\timpossible" << std::endl;
	else
		std::cout << "int:\t\t" << i << std::endl;
	
	if (_float == false)
		std::cout << "float:\t\timpossible" << std::endl;
	else
		std::cout << "float:\t\t" << std::setprecision(1) << std::fixed << f <<  "f" << std::endl;

	if (_double == false)
		std::cout << "double:\t\timpossible" << std::endl;
	else
		std::cout << "double:\t\t" << std::setprecision(1) << std::fixed << d << std::endl;
}
