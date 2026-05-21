/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 20:27:29 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/21 15:58:57 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed_point_nuber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// does it needs to be copy the var here either way it will call the 
// operator overload function
Fixed::Fixed(Fixed &copy) : fixed_point_nuber(copy.fixed_point_nuber)
{
	std::cout << "Copy constructor called" << std::endl;
	// *this = copy;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->fixed_point_nuber = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_nuber);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_nuber = raw;
}
