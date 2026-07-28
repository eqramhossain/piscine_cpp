/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 20:23:00 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/27 21:24:21 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base	*generate(void)
{
	Base *ptr = new A;

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
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


int	main(void)
{
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);
	return (0);
}
