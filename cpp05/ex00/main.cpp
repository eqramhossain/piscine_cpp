/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:47:22 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/11 17:55:54 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.h"

int main(void)
{
	try 
	{
		Bureaucrat one("ekram", 149);
		one.decrementGrade();
		std::cout << one;
		one.decrementGrade();
	}
	catch (std::exception &ex)
	{
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	return (0);
}

// class custom_exception : public std::exception
// {
// 	virtual const char *what() const noexcept
// 	{
// 		return "Custom Exception";
// 	}
//
// };
//
// int	main(void)
// {
// 	std::string word = "hello world";
//
// 	try
// 	{
// 		// std::cout << word.at(12) << std::endl;
// 		// int *array = new int[99999999999999];
// 		throw custom_exception();
// 	}
// 	catch (std::out_of_range &e)
// 	{
// 		std::cout << "hello\n" << e.what() << std::endl;
// 	}
// 	catch (std::bad_alloc &e)
// 	{
// 		std::cout << "bad_alloc\n" << e.what() << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "exception\n" << e.what() << std::endl; 
// 	}
// 	catch (int code)
// 	{
// 		std::cout << "Error Code: " << code << std::endl;
// 	}
// 	catch (...)
// 	{
// 		std::cout << "default catch case" << std::endl;
// 	}
//
// 	return (0);
// }
