/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:35 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/21 16:24:40 by ehossain         ###   ########.fr       */
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
		Fixed();						// default constructor
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &copy);				// copy constructor
		~Fixed();						// default destructor

		Fixed &operator=(Fixed const &rhs);	// copy assignment operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs);

#endif
