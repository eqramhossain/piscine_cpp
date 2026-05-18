/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 02:26:16 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/17 16:15:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "constructor called" << std::endl;
}

//a copy constructor.
//what is a copy constructor
//why is it useful
//how to use a copy constructor

//a copy assignment operator overload.
//what is a copy assignment operator overload
//why is it useful
//how to use a copy constructor


Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}
