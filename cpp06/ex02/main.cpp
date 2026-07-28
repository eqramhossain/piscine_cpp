/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 20:23:00 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/28 16:19:13 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base	*generate(void)
{
	int random = std::rand() % 3;
	Base *ptr;

	if (random == 0)
	{
		ptr = new A;
		std::cout << "Generated: A" << std::endl;
	}
	if (random == 1)
	{
		ptr = new B;
		std::cout << "Generated: B" << std::endl;
	}
	if (random == 2)
	{	
		ptr = new C;
		std::cout << "Generated: C" << std::endl;
	}

	return (ptr);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void	identify(Base &p)
{
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception &e)
	{
		// ignore
	}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception &e)
	{
		//ignore
	}
	try {
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception &e)
	{
		//ignore
	}
}


int	main(void)
{
	std::srand(std::time(NULL));

	for (int i = 0; i < 10; i++) 
	{
		Base *ptr = generate();

		identify(ptr);
		identify(*ptr);

		delete ptr;
	}
	return (0);
}
