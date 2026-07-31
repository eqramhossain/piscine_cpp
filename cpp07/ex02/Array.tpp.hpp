/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 20:06:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/31 21:13:14 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP_HPP
#define ARRAY_TPP_HPP

#include "Array.hpp"
#include <iostream>

template <typename T> 
Array<T>::Array()
	: _array(new int(0)), 
	_size_array(0)
{
	std::cout << "Defalut Constructor Called" << std::endl;
	std::cout << *_array << std::endl;
	std::cout << _size_array << std::endl;
}

template <typename T>
Array<T>::Array(const unsigned int n)
	: _array(new int(n)),
	_size_array(n)
{
	std::cout << "Parameteraized Constructor Called" << std::endl;
	// std::cout << _array << std::endl;
	// for (unsigned int i = 0; i < n; i++)
	// {
	// 	_array[i] = i;
	// 	std::cout << _array[i] << std::endl;
	// }
	std::cout << *_array << std::endl;
	std::cout << _size_array << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor Called" << std::endl;
	delete _array;
}

template <typename T>
Array<T>::Array(const Array<T> &rhs)
	: _array(new int(rhs._size_array)),
	_size_array(rhs._size_array)
{
	std::cout << "Copy Constructor Called" << std::endl;
	std::cout << *_array << std::endl;
	std::cout << _size_array << std::endl;

}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != *rhs)
	{
		delete [] _array;
		_array = new int(rhs._size_array);
		_size_array = rhs._size_array;
	}
	std::cout << *_array << std::endl;
	std::cout << _size_array << std::endl;
	return (*this);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	std::cout << "size= " << this->_size_array << std::endl;
	return (this->_size_array);
}

// template <typename T>
// const char *Array<T>::OutOfBound::what() const throw()
// {
// 	return ("memory out of range");
// }

// template <typename T>
// std::ostream	&operator<<(std::ostream &out, const Array<T> &rhs)
// {
// 	for (unsigned int i = 0; i < rhs.size() ; i++)
// 	{
// 		std::cout << "_array[" << i << "]" << " = " << rhs.get_value([i]) << std::endl;
// 	}
//
// 	return (out);
// }


#endif
