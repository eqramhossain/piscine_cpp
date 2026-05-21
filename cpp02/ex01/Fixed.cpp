/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:24 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/21 20:29:15 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <fstream>
#include <cmath>

Fixed::Fixed(): _fixed_point_nuber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb)
{
	this->_fixed_point_nuber = (int)roundf((nb * (1 << _fractional_bits)));
	std::cout << "Int constructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return ((int)roundf(this->_fixed_point_nuber / (1 << _fractional_bits)));
}

Fixed::Fixed(float const nb)
{
	this->_fixed_point_nuber = (int)roundf(nb * (1 << _fractional_bits));
	std::cout << "Float constructor called" << std::endl;}

float	Fixed::toFloat(void) const
{
	return((float)this->_fixed_point_nuber / (float)(1 << this->_fractional_bits));
}

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

std::ostream		&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}
