/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:13:42 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/11 16:12:52 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <deque>
#include <exception>

class	Span 
{
	private:
		unsigned int _N;
		unsigned int _counter;
		std::deque<unsigned int> _integers;

	public:
		Span(void);
		Span(const unsigned int N);
		~Span(void);

		Span(const Span &rhs);
		Span &operator=(const Span &rhs);

		void	addNumber(const unsigned int N);
		void	addNumber(std::deque<unsigned int>::iterator it_front, std::deque<unsigned int>::iterator it_end);

		// Shortest Span: It finds the two numbers that are closest to each other in value and calculates the difference between them.		
		void	shortestSpan();

		// Longest Span: It finds the two numbers that are farthest apart in value (usually the absolute maximum minus the absolute minimum) 
		void	longestSpan();

		class	arrayIsFull : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};

		class	arraySize : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};

		class	noSpanFound : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};

		class	tooManyValues : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};

		void	get_N(void);
};

#endif
