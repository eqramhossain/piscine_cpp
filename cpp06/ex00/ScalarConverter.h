/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:48:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/25 22:25:55 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

class ScalarConverter 
{
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter &rhs);
		ScalarConverter &operator=(ScalarConverter &rhs);

		static char convertChar(std::string str);
		static int convertInt(std::string str);
		static float convertFloat(std::string str);
		static double convertDouble(std::string str);

		static bool _char;
		static bool _int;
		static bool _float;
		static bool _double;

	public:
		static void convert(std::string input);

};

#endif
