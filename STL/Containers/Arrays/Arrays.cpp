/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arrays.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:31:51 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/07 20:38:47 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * IMPORTANT !!!
 * std::arrays are introduced in c++11 so it wont compile with -std=c++98
 * */

#include <iostream>
#include <array>
// #include <algorithm>
#include <string>

int		main(void)
{
	// creates a fixed-size array
	std::array<int, 5> arr = {4, 3, 2, 1, 0};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "arr[" << i << "] = "<< arr[i] << std::endl;
	}
	std::cout << std::endl;
	
	// using an algorithm form <algorithm> header
	// std::sort(arr.begin(), arr.end());
	//
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << arr[i] << " ";
	// }
	// std::cout << std::endl;

	// Common Member Functions of std::array at, get, operator[]
	// at() performs bounds checking,
	// get() accesses elements using compile-time indices, 
	// operator[] behaves similarly to C-style arrays.
	std::cout << "arr.at(0) = " << arr.at(0) << std::endl;
	std::cout << "std::get<4>(arr) = "<< std::get<4>(arr) << std::endl;
	std::cout << "arr[2] = " << arr[2] << std::endl;
	std::cout << std::endl;
	
	//The front() and back() function return reference to the first and last elements 
	//of the array.
	std::cout << "arr.front() = " << arr.front() << std::endl;
	std::cout << "arr.back() = " << arr.back() << std::endl;
	std::cout << std::endl;
	
	// The size() function returns the number of elements in an array 
	// max_size() returns the maximum number of elements array can hold 
	std::cout << "arr.size() = "  <<  arr.size()     << std::endl;
	std::cout << "arr.max_size() = " << arr.max_size() << std::endl;
	std::cout << std::endl;

	// The swap() function exchanges the contents of two arrays.
	std::array<int, 5> b = {5, 6, 7, 8, 9};
	arr.swap(b);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "arr[" << i << "] = "<< arr[i] << std::endl;
	}
	std::cout << std::endl;

	// empty() and fill() check if the array is empty and assign values to all elements.
	std::array<std::string, 5> c;
	if (!c.empty())
	{
		c.fill("hello_world");
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "c[" << i << "] = "<< c[i] << std::endl;
	}
	std::cout << std::endl;

	// The data() function returns a pointer to the first element of the array.
	
	int *ptr = arr.data();
	std::cout << *ptr << std::endl;

	return (0);
}
