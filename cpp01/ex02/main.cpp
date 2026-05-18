/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 21:03:52 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 17:44:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "The memory address of the  stringVAR: " << &stringVAR << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the stringVAR: " << stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}

// int	main(void)
// {
// 	int	a = 42;
//
// 	int	&ref = a;
//
// 	std::cout << ref << std::endl;
//
// 	ref = 4242;
//
// 	std::cout << a << std::endl;
//
// 	std::cout << &a << std::endl;
// 	std::cout << &ref << std::endl;
// }

// a references is another name (an alias) for an existing variable
// it is like 
// - a variable has a memory location 
// - a references does not create new object is simply gives another name to the same memory
// example
// `
// int a = 42;
// int &ref = a;
// `
// so here a and ref refer to the same variable, modifying one modifies the other.
//
// a reference must be initialize in the same line
//
// int	&ref = a;
//
// this is illegal int	&ref;
//
// a reference cannot change target
