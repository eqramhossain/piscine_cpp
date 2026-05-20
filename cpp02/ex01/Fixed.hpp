/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:33:35 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/20 21:02:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					fixed_point_nuber;
		static const int	fractional_bits = 0;
	public:
		Fixed();						// default constructor
		Fixed(Fixed &copy);				// copy constructor
		~Fixed();						// default destructor

		Fixed &operator=(Fixed const &rhs);	// copy assignment operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
