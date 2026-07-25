/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:49:02 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/25 21:09:26 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <cctype>
# include <iostream>
# include <limits>
# include <iomanip>
# include <cstdlib>

bool ScalarConverter::_char = true;
bool ScalarConverter::_int = true;
bool ScalarConverter::_float = true;
bool ScalarConverter::_double = true;

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

// bool	isChar(std::string input)
// {
// 	if (input.size() == 1)
// 	{
// 		if (std::isprint(static_cast<unsigned char>(input[0])) && !std::isdigit(static_cast<unsigned char>(input[0])))
// 		{
// 			return (true);
// 		}
// 	}
// 	return (false);
// }

bool	isInt(std::string input)
{
	int i = 0;	
	if (input[i] == '+' || input[i] == '-')
		i++;
	while(input[i])
	{
		if (std::isdigit(input[i]) == 0)
			return (false);
		i++;
	}
	if (input.size() > 11)
		return (false);
	return (true);
}

// bool	isFloat(std::string input)
// {
// 	int i;
// 	int found;
//
// 	i = 0;
// 	found = 0;
// 	if (input.size() < 2)
// 		return (false);
// 	if (input[input.size() - 1] == 'f')
// 	{
// 		input.erase(input.size() - 1, input.size());
// 	}
// 	else 
// 		return (false);
//
// 	if (input[i] == '+' || input[i] == '-')
// 	{
// 		i++;
// 		if (!isdigit(input[i]))
// 			return (false);
// 	}
// 	while(input[i])
// 	{
// 		if (std::isdigit(input[i]) == 0)
// 		{
// 			if (input[i] == '.')
// 			{
// 				found++;
// 				if (isdigit(input[i + 1]) && isdigit(input[i - 1]))
// 					return (false);
// 			}
// 			else
// 				return (false);
// 		}
// 		i++;
// 	}
// 	if (found > 1)
// 		return (false);
// 	return (true);
// }

bool	isFloat(std::string str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (false);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '.')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (!str[i] || (str[i] == 'f' && i == static_cast<int>(str.length() - 1)))
		return (true);
	return (false);
}

// bool	isDouble(std::string input)
// {
// 	int i;
// 	int found;
//
// 	i = 0;
// 	found = 0;
// 	if (input.size() < 3)
// 		return (false);
// 	if (input[i] == '+' || input[i] == '-')
// 	{
// 		i++;
// 		if (!isdigit(input[i]))
// 			return (false);
// 	}
// 	while(input[i])
// 	{
// 		if (std::isdigit(input[i]) == 0)
// 		{
// 			if (input[i] == '.')
// 			{
// 				found++;
// 				if (isdigit(input[i + 1]) && isdigit(input[i - 1]))
// 					return (false);
// 			}
// 			else
// 				return (false);
// 		}
// 		i++;
// 	}
// 	if (found > 1 || found == 0)
// 		return (false);
// 	return (true);
// }

char	ScalarConverter::convertChar(std::string input)
{
	if (input.size() == 1 && std::isprint(input[0]))
		return (static_cast<char>(input[0]));
	if (input.size() > 1)
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<char>::max() || var < 0)
			return (_char = false, -1);
		unsigned char c = static_cast<unsigned char>(var);
		if (std::isprint(c) != 0)
			return(c);
	}
	return (_char = false, -1);
}

int		ScalarConverter::convertInt(std::string input)
{
	if (isChar(input))
		return (static_cast<int>(input[0]));
	if (input.size() >= 1)
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<int>::max() || var < -std::numeric_limits<int>::max())
			return (_int = false, -1);
		else 
			return (static_cast<int>(var));
	}	
	return (_int = false, -1);
}

float	ScalarConverter::convertFloat(std::string input)
{
	if (isChar(input))
		return (static_cast<float>(input[0]));
	if (input.size() >= 1)
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<float>::max() || var < -std::numeric_limits<float>::max())
			return (_float = false,-1);
		else 
			return (static_cast<float>(var));
	}
	return (_float = false, -1);
}

double	ScalarConverter::convertDouble(std::string input)
{
	if (isChar(input))
		return (static_cast<double>(input[0]));
	if (input.size() >= 1)
	{
		double var = std::atof(input.c_str());
		if (var > std::numeric_limits<double>::max() || var < -std::numeric_limits<double>::max())
			return (_double = false,-1);
		else 
			return (static_cast<double>(var));
	}
	return (_double = false, -1);
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
	else if ((!isFloat(input) && !isChar(input)))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	// if (isChar(input) == false)
	// 	_char = false;
	// if (isInt(input) == false)
	// 	_int = false;
	// if (isFloat(input) == false)
	// 	_float = false;
	// if (isDouble(input) == false)
	// 	_double = false;

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
	
	if (i == -1 && _int == false)
		std::cout << "int:\t\timpossible" << std::endl;
	else
		std::cout << "int:\t\t" << i << std::endl;
	
	if (f == -1 && _float == false)
		std::cout << "float:\t\timpossible" << std::endl;
	else
		std::cout << "float:\t\t" << std::setprecision(1) << std::fixed << f <<  "f" << std::endl;

	if (d == -1 && _double == false)
		std::cout << "double:\t\timpossible" << std::endl;
	else
		std::cout << "double:\t\t" << std::setprecision(1) << std::fixed << d << std::endl;
}
