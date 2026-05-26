/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:32:14 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 15:50:47 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
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

Animal::Animal(Animal const &rhs): _type(rhs._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
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

void	Animal::makeSound() const
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
