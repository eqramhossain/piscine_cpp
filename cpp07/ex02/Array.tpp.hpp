/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 20:06:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/01 19:20:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP_HPP
#define ARRAY_TPP_HPP

#include <iostream>
#include <ostream>

template <typename T>
class Array 
{
	private:
		T *_array;
		unsigned int _size_array;

	public:
		Array();
		Array(const unsigned int n);
		~Array();

		Array(const Array &rhs);
		Array &operator=(const Array &rhs);

		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		
		unsigned int size(void) const;
		
		class OutOfBound : public std::exception 
		{
			virtual const char	*what() const throw();
		};
};

template <typename T> 
Array<T>::Array()
	: _array(NULL), 
	_size_array(0)
{
	std::cout << "Defalut Constructor Called" << std::endl;
}

template <typename T>
Array<T>::Array(const unsigned int n)
	: _array(new T[n]()),
	_size_array(n)
{
	std::cout << "Parameteraized Constructor Called" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor Called" << std::endl;
	delete [] _array;
}

template <typename T>
Array<T>::Array(const Array<T> &rhs)
	: _array(new T[rhs._size_array]),
	_size_array(rhs._size_array)
{
	std::cout << "Copy Constructor Called" << std::endl;
	for (unsigned int i = 0; i < rhs._size_array; i++)
	{
		_array[i] = rhs._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		delete [] _array;
		_array = new T[rhs._size_array];
		_size_array = rhs._size_array;
		for (unsigned int i = 0; i < rhs._size_array; i++)
		{
			_array[i] = rhs._array[i];
		}
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index < _size_array)
		return (_array[index]);
	else 
		throw Array<T>::OutOfBound();
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index > _size_array)
		throw Array<T>::OutOfBound();
	else 
		return (_array[index]);
}


template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size_array);
}

template <typename T>
const char *Array<T>::OutOfBound::what() const throw()
{
	return ("index is out of bound");
}

#endif
