/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 11:53:16 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/31 20:53:21 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <ostream>

template <typename T>
class Array 
{
	private:
		int *_array;
		unsigned int _size_array;

	public:
		Array();
		Array(const unsigned int n);
		~Array();

		Array(const Array &rhs);
		Array &operator=(const Array &rhs);
		
		unsigned int size(void) const;
		
		// class OutOfBound : public std::exception 
		// {
		// 	virtual const char	*what() const throw();
		// };
};

// template <typename T>
// std::ostream	&operator<<(std::ostream &out, const Array<T> &rhs);

#endif
