/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:31:12 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 14:57:03 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "Cat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string const type) : WrongAnimal(type)
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs);
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
