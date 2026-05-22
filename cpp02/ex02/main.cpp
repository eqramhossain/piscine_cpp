/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 20:35:16 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/22 17:52:34 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int		main(void)
{
	{
		// Fixed a(10);
		// Fixed const b(10);

		// if (a > b)
		// 	std::cout << "a is bigger" << std::endl;
		// if (a < b)
		// 	std::cout << "a is smaller" << std::endl;
		// if (a >= b)
		// 	std::cout << "a is bigger or equal to b" << std::endl;
		// if (a <= b)
		// 	std::cout << "a is smaller or equal to b" << std::endl;
		// if (a != b)
		// 	std::cout << "a is not equal to b" << std::endl;
		// if (a == b)
		// 	std::cout << "a is equal to b" << std::endl;
	}

	{
		// Fixed const c(Fixed(5.05f) * Fixed(2));	
		// Fixed const d = Fixed(5.05f) * Fixed(2);

		// std::cout << c << std::endl;
		// std::cout << d << std::endl;
	}

	{
		// Fixed	e;
		//
		// std::cout << e << std::endl;
		// std::cout << ++e << std::endl;
		// std::cout << e << std::endl;
		// std::cout << e++ << std::endl;
		// std::cout << e << std::endl;
	}

	{
		// Fixed a(24);
		// Fixed b(2.225f);
		//
		// std::cout << Fixed::max(a, b) << std::endl;
		// std::cout << Fixed::min(a, b) << std::endl;
	}
	return (0);
}
