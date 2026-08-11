/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:11:05 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/09 20:46:09 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>

class containerSize : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("container size is 0");
		}
};

class easyFindException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("can't find any occurrence");
		}
};

template <typename T> 
void easyfind(T contain, int value)
{
	if (contain.size() == 0)
	{
		throw containerSize();
	}
	bool found = false;
	for (size_t i = 0; i < contain.size(); i++)
	{
		if (contain[i] == value)
		{
			found = true;
			std::cout << "found matched value = " << contain[i] << std::endl;
			break;
		}
	}
	if (found == false)
	{
		throw easyFindException();
	}
	std::find()
}

#endif
