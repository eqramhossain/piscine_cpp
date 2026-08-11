/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:14:50 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/11 11:50:37 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <exception>
#include <iostream>
#include <list>
#include "easyfind.hpp"

int		main(void)
{
	std::deque<int> d;

	try 
	{
		easyfind(d, 5);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	d.push_back(42);

	try 
	{
		easyfind(d, '*');
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	d.push_back(2);
	d.push_back(5);

	try 
	{
		easyfind(d, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	d.push_back(2);
	d.push_back(5);
	d.push_back(2);
	d.push_back(5);
	d.push_back(2);
	d.push_back(5);
	d.push_back(2);
	d.push_back(5);
	d.push_back(2);
	d.push_back(5);
	d.push_back(2);
	d.push_back(0);

	try 
	{
		easyfind(d, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	std::list<char> li;

	li.push_back('a');
	li.push_back('b');
	li.push_back('c');

	try 
	{
		easyfind(li, 'x');
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}

	try 
	{
		easyfind(li, 'c');
	}
	catch (std::exception &e)
	{
		std::cout << "Exception message: " << e.what() << std::endl;
	}


	return (0);
}
