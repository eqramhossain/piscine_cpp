/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:48:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/23 21:11:55 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>
#include <stdbool.h>

class ScalarConverter 
{
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter &rhs);
		ScalarConverter &operator=(ScalarConverter &rhs);

		static char convertToChar(std::string str);
		static int convertToInt(std::string str);
		static float convertToFloat(std::string str);
		static double convertToDouble(std::string str);

	public:
		static void convert(std::string input);

};

#endif
