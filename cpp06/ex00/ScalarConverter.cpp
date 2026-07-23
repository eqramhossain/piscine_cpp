/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:49:02 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/23 21:16:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <iostream>

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

}

bool	isInt(std::string str)
{

}

bool	isFloat(std::string str)
{

}

bool	isDouble(std::string str)
{

}

char	ScalarConverter::convertToChar(std::string str)
{

}

int		ScalarConverter::convertToInt(std::string str)
{

}

float	ScalarConverter::convertToFloat(std::string str)
{

}

double	ScalarConverter::convertToDouble(std::string str)
{

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

	if (input.size() == 1)
	{
		if (input[0] >= 33 && input[0] <= 126)
		{
			std::cout << input[0] << std::endl;
			// convert to char,int,float,double
			// print the values
			return ;
		}
		else
			std::cout << "Not printable char" << std::endl;
	}

	if (input[input.size() - 1] == 'f')
	{
		input.erase(input.size() - 1, input.size());
		std::cout << input << std::endl;
		// convert to char,int,float,double
		// print the values
		return ;

	}

	if (input.find('.') != std::string::npos)
	{
		std::cout << input << std::endl;
		// convert to char,int,float,double
		// print the values
		return ;

	}
}

