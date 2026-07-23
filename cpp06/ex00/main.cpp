/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:01:59 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/22 17:51:22 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.h"

int		main(int ac, char *av[])
{
	if (ac != 2)
		return (std::cerr << "Expected: ./convert [input]" << std::endl, 1);

	ScalarConverter::convert(static_cast<std::string>(av[1]));
	return (0);
}
