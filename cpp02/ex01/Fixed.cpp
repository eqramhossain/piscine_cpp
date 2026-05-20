/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:24 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/19 19:37:06 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _fixed_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int	nb): _fixed_nb(nb << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
	std::cout << "float constructor called" << std::endl;
	_fixed_nb = ;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixed_nb = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_nb = raw;
}
