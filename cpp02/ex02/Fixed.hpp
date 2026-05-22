/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:35 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/22 17:49:01 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <fstream>

class	Fixed
{
	private:
		int					_fixed_point_nuber;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed &operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		float	operator+(Fixed const &rhs) const;
		float	operator-(Fixed const &rhs) const;
		float	operator*(Fixed const &rhs) const;
		float	operator/(Fixed const &rhs) const;

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int dummy);
		Fixed	operator--(int dummy);

		static	Fixed	&min(Fixed &one, Fixed &two);
		static	Fixed	&max(Fixed &one, Fixed &two);
		static	Fixed const	&min(Fixed const &one, Fixed const &two);
		static	Fixed const	&max(Fixed const &one, Fixed const &two);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs);

#endif
