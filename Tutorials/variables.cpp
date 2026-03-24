/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:45:29 by ehossain          #+#    #+#             */
/*   Updated: 2026/03/24 06:54:29 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	char var[13] = "hello world";
	std::string mystring = "this is a string";
	int nb = 1024;
	int age (42);

	// inserting the endl manipulator ends the line
	// (printing a newline character and [flusing the stream).
	std::cout << var << std::endl;
	std::cout << mystring << std::endl;
	mystring = "this is another string";
	std::cout << mystring << std::endl;
	std::cout << "my first nuber = " << nb << std::endl;
	std::cout << "my age = " << age << std::endl;
	return (0);
}
