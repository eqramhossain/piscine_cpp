/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:50:28 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 19:03:32 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string const type) : Animal(type)
{
	_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &rhs) : Animal(rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		this->_brain = new Brain(*rhs._brain);
		if (this->_brain == NULL)
		{
			perror("Dog Brain allocation failed");
			std::cerr << "Exiting the process now." << std::endl;
			exit(1);
		}
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void	Dog::setIdea(int id, std::string const idea)
{
	this->_brain->setIdea(id, idea);
}

void	Dog::getIdea(void) const
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Idea " << i << " of the Dog is: ";
		std::cout << this->_brain->getIdea(i) << std::endl;
	}
}

void	Dog::printBrainAddress() const
{
	std::cout << "Address = " << &this->_brain << std::endl;
}
