/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:38:04 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/11 16:26:24 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>

int		main(void)
{
	Span mySpan(10042);

	mySpan.get_N();

	try
	{
		mySpan.addNumber(4);		
		mySpan.addNumber(423);
		mySpan.addNumber(3);
		mySpan.addNumber(42);
		mySpan.addNumber(99);
		mySpan.addNumber(100);
		mySpan.addNumber(5);
		mySpan.addNumber(1);
		mySpan.addNumber(3);
		mySpan.addNumber(10);
		mySpan.addNumber(1000);
		mySpan.addNumber(432);

	}
	catch (std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	try
	{
		mySpan.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	try
	{
		mySpan.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	std::deque<unsigned int> numbers;
	for (unsigned int i = 0; i < 10000; i++)
	{
		numbers.push_back(i);
	}

	try 
	{ 
		mySpan.addNumber(numbers.begin(), numbers.end());
	}
	catch (std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	try
	{
		mySpan.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	try
	{
		mySpan.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	return(0);
}
