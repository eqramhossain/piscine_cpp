/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:32:14 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 20:40:13 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string const type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "Aaaaaaaaaaaaaaaaaaaaaaaa" << std::endl;
}

void	Animal::setType(std::string const type)
{
	this->_type = type;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}
