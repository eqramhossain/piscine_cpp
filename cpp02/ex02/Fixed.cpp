/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:24 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/22 17:49:10 by ehossain         ###   ########.fr       */
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

Fixed::Fixed(float const nb)
{
	this->_fixed_point_nuber = (int)roundf(nb * (1 << _fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_nuber = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_point_nuber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_nuber = raw;
}

int		Fixed::toInt(void) const
{
	return ((int)roundf(this->_fixed_point_nuber / (1 << _fractional_bits)));
}

float	Fixed::toFloat(void) const
{
	return((float)this->_fixed_point_nuber / (float)(1 << this->_fractional_bits));
}

std::ostream		&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_fixed_point_nuber > rhs._fixed_point_nuber)
		return (true);
	else 
		return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_fixed_point_nuber < rhs._fixed_point_nuber)
		return (true);
	else 
		return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_fixed_point_nuber >= rhs._fixed_point_nuber)
		return (true);
	else 
		return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_fixed_point_nuber <= rhs._fixed_point_nuber)
		return (true);
	else 
		return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->_fixed_point_nuber == rhs._fixed_point_nuber)
		return (true);
	else 
		return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_fixed_point_nuber != rhs._fixed_point_nuber)
		return (true);
	else 
		return (false);
}

float	Fixed::operator+(Fixed const &rhs) const
{
	float x = toFloat();
	x += (float)rhs._fixed_point_nuber / (float)(1 << rhs._fractional_bits);
	return (x);
}

float	Fixed::operator-(Fixed const &rhs) const
{
	float x = toFloat();
	x -= (float)rhs._fixed_point_nuber / (float)(1 << rhs._fractional_bits);
	return (x);
}

float	Fixed::operator*(Fixed const &rhs) const
{
	float x = toFloat();
	x *= (float)rhs._fixed_point_nuber / (float)(1 << rhs._fractional_bits);
	return (x);
}

float	Fixed::operator/(Fixed const &rhs) const
{
	float x = toFloat();
	x /= (float)rhs._fixed_point_nuber / (float)(1 << rhs._fractional_bits);
	return (x);
}

Fixed	&Fixed::operator++(void)
{
	++this->_fixed_point_nuber;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--this->_fixed_point_nuber;
	return (*this);
}

Fixed	Fixed::operator++(int dummy)
{
	(void)dummy;
	Fixed	temp = *this;
	++this->_fixed_point_nuber;
	return (temp);
}

Fixed	Fixed::operator--(int dummy)
{
	(void)dummy;
	Fixed	temp = *this;
	--this->_fixed_point_nuber;
	return (temp);
}

Fixed	&Fixed::min(Fixed &one, Fixed &two)
{
	if (one._fixed_point_nuber < two._fixed_point_nuber)
		return (one);
	else 
		return (two);
}

Fixed	&Fixed::max(Fixed &one, Fixed &two)
{
	if (one._fixed_point_nuber > two._fixed_point_nuber)
		return (one);
	else 
		return (two);
}

Fixed const &Fixed::min(Fixed const &one, Fixed const &two)
{
	if (one._fixed_point_nuber < two._fixed_point_nuber)
		return (one);
	else 
		return (two);
}

Fixed const	&Fixed::max(Fixed const &one, Fixed const &two)
{
	if (one._fixed_point_nuber > two._fixed_point_nuber)
		return (one);
	else 
		return (two);
}
