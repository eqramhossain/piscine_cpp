/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:31:34 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 17:07:54 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			if (rhs._ideas[i].length() > 0)
				this->_ideas[i].assign(rhs._ideas[i]);
		}
	}
	return (*this);
}

void	Brain::setIdea(int id, std::string const idea)
{
	if (id < 100)
		_ideas[id] = idea;
	else
		std::cout << "100 ideas per Brain" << std::endl;
}

std::string		Brain::getIdea(int id) const
{
	if (id < 100) 
		return (_ideas[id]);
	else 
		return ("100 ideas per Brain");
}
