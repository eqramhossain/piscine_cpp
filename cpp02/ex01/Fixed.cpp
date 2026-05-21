/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:24 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/21 17:33:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <fstream>

Fixed::Fixed() : _fixed_point_nuber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	std::cout << nb << std::endl;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	std::cout << nb << std::endl;
}

// does it needs to be copy the var here either way it will call the 
// operator overload function
Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_nuber = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_point_nuber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_nuber = raw;
}

float	Fixed::toFloat(void) const
{
	std::cout << "toFloat called" << std::endl;
	return (42.42f);
}

int		Fixed::toInt(void) const
{
	std::cout << "toInt called" << std::endl;
	return (42);
}

std::ostream		&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.getRawBits() << std::endl;
	return (os);
}
