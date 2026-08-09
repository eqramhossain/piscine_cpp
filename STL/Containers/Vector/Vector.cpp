/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 16:03:16 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/09 17:43:44 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <exception>
#include <iostream>
#include <vector>

/*
 * Vector represent a dynamic sized array that grow automatically when elements
 * are added beyond current capacities.
 * don't forget to read the <vector> documentation
 * */

int		main(void)
{
	// initializing an empty vector.
	std::vector<int> v;

	// print the size of Vector v
	std::cout << "v size = " << v.size() << std::endl;

	// insert elements
	// insert an element at the back/end of vector.
	v.push_back(42);
	v.push_back(43);
	v.push_back(44);

	// insert an element at the front of vector
	v.insert(v.begin(), 0); // at pos 0
	v.insert(v.begin() + 1, 1); // at pos 1

	// print v elements	
	for (size_t i = 0; i < v.size(); i++)
		std::cout << i << " ";

	// Accessing using operator[]
	std::cout << "Element at index 2 using []: " << v[2] << std::endl;
    
    // Accessing using at()
	std::cout << "Element at index 3 using at(): " << v.at(3) << std::endl;
    
    // Uncommenting the next line will throw an 
    // out_of_range exception 
    try 
	{
		std::cout << v.at(10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "exception caught: " << e.what() << std::endl;
	}
	
	// update a value
	std::cout << "Original value at index 1: " << v[1] << std::endl;
    // Updating the element at index i
    v[1] = 50;
	std::cout << "v[1] = " << v[1] << std::endl;

	// and vector can also be 2D of 3D here is an example
	std::vector< std::vector<int> > matrix = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};

	// Traversing using indices
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
			std::cout << matrix[i][j] << " ";
        }
		std::cout << std::endl;
    }

	
	return (0);
}
