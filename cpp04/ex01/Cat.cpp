/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:42:31 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 19:03:26 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cstdlib>
#include <cstdio>

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string const type) : Animal(type)
{
	_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete (this->_brain);
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &rhs) : Animal(rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		this->_brain = new Brain(*rhs._brain);
		if (this->_brain == NULL)
		{
			perror("Cat Brain allocation failed");
			std::cerr << "Exiting the process now." << std::endl;
			exit(1);
		}
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

void	Cat::setIdea(int id, std::string const idea)
{
	this->_brain->setIdea(id, idea);
}

void	Cat::getIdea(void) const
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Idea " << i << " of the Cat is: ";
		std::cout << this->_brain->getIdea(i) << std::endl;
	}
}

void	Cat::printBrainAddress() const
{
	std::cout << "Address = " << &this->_brain << std::endl;
}
