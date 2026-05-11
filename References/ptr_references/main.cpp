/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:54:45 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/11 17:35:01 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	var;

	var = 42;
	std::cout << "var = " << var << std::endl;
	std::cout << "&var = " << &var << std::endl;
	// a pointer is a variabe who holds a memory address of another variabe
	int	*ptr;

	ptr = &var;
	*ptr = 4422;
	std::cout << "ptr = " << ptr << std::endl;
	std::cout << "*ptr = " << *ptr << std::endl;

	//here ptr variabe is holding the address of var and the sign `&` is telling to store the memory address
	
	int	&ref = var;
	ref = 444222;
	// references in the other hands must be initialized upon declaration
	// unlike pointer it can't be initialized afterwords or reassigned to another variabe
	std::cout << "&ref = " << &ref << std::endl;
	std::cout << "ref = " << ref << std::endl;

	return (0);
}
