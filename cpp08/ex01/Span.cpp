/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:14:09 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/11 16:24:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <deque>
#include <iostream>

Span::Span(void) : _N(0), _counter(0), _integers(0)
{
}

Span::Span(const unsigned int N) : _N(N), _counter(0), _integers(0)
{
}

Span::~Span(void)
{
}

Span::Span(const Span &rhs) : _N(rhs._N), _counter(rhs._counter), _integers(rhs._integers)
{
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_counter = rhs._counter;
		this->_integers = rhs._integers;
	}
	return (*this);
}

void	Span::addNumber(unsigned int N)
{
	if (this->_counter < this->_N)
	{
		this->_integers.push_back(N);
		// std::cout << N << std::endl;
		this->_counter++;
	}
	else 
		throw Span::arrayIsFull();
}

void	Span::addNumber(std::deque<unsigned int>::iterator it_front, std::deque<unsigned int>::iterator it_end)
{
	unsigned int remain = this->_N - this->_integers.size();
	if (std::distance(it_front,it_end) > remain)
	{
		throw tooManyValues();
	}
	else 
		this->_integers.insert(this->_integers.end(), it_front, it_end);
}

void	Span::shortestSpan(void)
{
	if (_N <= 1)
		throw Span::arraySize();

	std::sort(this->_integers.begin(), this->_integers.end());

	unsigned int smallest = this->_integers.front();

	for (std::deque<unsigned int>::iterator it = this->_integers.begin(); it != this->_integers.end(); it++)
	{
		if (*it > smallest)
		{
			std::cout << *it - smallest << std::endl;
			return ;
		}
	}
	throw Span::noSpanFound();
}

void	Span::longestSpan(void)
{
	if (_N <= 1)
		throw Span::arraySize();

	if ((this->_integers.back() - this->_integers.front()) == 0)
		throw Span::noSpanFound();
	else 
		std::cout << (this->_integers.back() - this->_integers.front()) << std::endl;
}

const char* Span::tooManyValues::what() const throw()
{
	return ("array size does not allow to accept that many values");
}

const char* Span::arrayIsFull::what() const throw()
{
	return ("array is already full");
}

const char* Span::arraySize::what() const throw()
{
	return ("array size is <= 1");
}

const char* Span::noSpanFound::what() const throw()
{
	return ("no span can be found");
}

void	Span::get_N(void)
{
	std::cout << "_N = " << _N << std::endl;
}
