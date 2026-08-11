/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:11:05 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/11 11:46:18 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>

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

	// T is a template-dependent type, and iterator is a type inside T.
	typename T::iterator it = std::find(contain.begin(), contain.end(), value);

	if (*it != value)
	{
		throw easyFindException();
	}
	else 
	{
		typename T::iterator it_start = contain.begin();
		std::cout << "Found value at " << std::distance(it_start, it) << std::endl;
	}
}

#endif
