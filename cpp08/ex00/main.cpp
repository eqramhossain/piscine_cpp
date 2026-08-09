/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:14:50 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/09 20:32:15 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <exception>
#include <iostream>
#include "easyfind.hpp"

int		main(void)
{
	std::deque<int> d;

	try 
	{
		easyfind(d, 555);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	d.push_back(1);

	try 
	{
		easyfind(d, 555);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	d.push_back(2);
	d.push_back(3);

	try 
	{
		easyfind(d, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	return (0);
}
