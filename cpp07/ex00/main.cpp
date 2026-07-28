/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 20:42:11 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/28 21:18:48 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.h"
#include <iostream>

int		main(void)
{
	std::cout << "Max of 3 and 7 is: " << ::max<int>(3, 7) << std::endl;
	std::cout << "Max of 3.5 and 7.5 is :" << ::max<double>(3.5, 7.5) << std::endl;
	std::cout << "Max of 'g' and 'e' is: " << ::max<char>('g', 'e') << std::endl;

	std::cout << "Min of 3 and 7 is: " << ::min<int>(3, 7) << std::endl;
	std::cout << "Min of 3.5 and 7.5 is :" << ::min<double>(3.5, 7.5) << std::endl;
	std::cout << "Min of 'g' and 'e' is: " << ::min<char>('g', 'e') << std::endl;

	int a = 3, b = 7;
	std::cout << "Before Swap" << std::endl;
	std::cout << "a= "<< a << std::endl << "b= " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "After Swap" << std::endl;
	std::cout << "a= "<< a << std::endl << "b= " << b << std::endl;

	double i = 3.5, j = 7.5;
	std::cout << "Before Swap" << std::endl;
	std::cout << "i= "<< i  << std::endl << "j= " << j << std::endl;
	::swap<double>(i, j);
	std::cout << "After Swap" << std::endl;
	std::cout << "i= "<< i  << std::endl << "j= " << j << std::endl;

	char x = 'x', y = 'y';
	std::cout << "Before Swap" << std::endl;
	std::cout << "x= "<< x << std::endl << "y= " << y << std::endl;
	::swap<char>(x, y);
	std::cout << "After Swap" << std::endl;
	std::cout << "x= "<< x << std::endl << "y= " << y << std::endl;

	{
		int a = 2;
		int b = 3;

		std::cout << "Before Swap" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "After Swap" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;

		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "Before Swap" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "After Swap" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;

		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}
