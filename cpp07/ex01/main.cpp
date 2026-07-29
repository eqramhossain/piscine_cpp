/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:49:31 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/29 20:17:54 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.h"
#include <string>

class Test
{
	private:
		int _value;

	public:
		Test(int value) : _value(value) {}

		void print() const
		{
			std::cout << "Test value: " << _value << std::endl;
		}
};


void ft_test_class(Test &obj)
{
	obj.print();
}

void	ft_bar(int const value)
{
	std::cout << value << std::endl;
}

int main(void)
{
	std::cout << "===== INT TEST =====" << std::endl;
	int array[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = 11;
	::iter(array, size, ft_foo<int>);
	std::cout << std::endl;

	std::cout << "===== CHAR TEST =====" << std::endl;
	char array2[11] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'h'};
	int size2 = 11;
	::iter(array2, size2, ft_foo<char>);
	std::cout << std::endl;

	std::cout << "===== DOUBLE TEST =====" << std::endl;
	double array3[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	int size3 = 5;
	::iter(array3, size3, ft_foo<double>);
	std::cout << std::endl;

	std::cout << "===== STRING TEST =====" << std::endl;
	std::string array4[3] = {"hello", "world", "42"};
	int size4 = 3;
	::iter(array4, size4, ft_foo<std::string>);
	std::cout << std::endl;

	std::cout << "===== CONST FUNCTION TEST =====" << std::endl;
	int const array5[5] = {1, 2, 3, 4, 5};
	::iter(array5, 5, ft_bar);
	std::cout << std::endl;

	std::cout << "===== CLASS TEST =====" << std::endl;
	Test objects[3] = {Test(1), Test(2), Test(3)};
	::iter(objects, 3, ft_test_class);
	std::cout << std::endl;

	return (0);
}
