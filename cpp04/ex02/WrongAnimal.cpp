/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:31:14 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 15:24:43 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Aaaaaaaaaaaaaaaaaaaaaaaa" << std::endl;
}

void	WrongAnimal::setType(std::string const type)
{
	this->_type = type;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}
