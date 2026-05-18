/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 02:25:39 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/17 02:33:16 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
	private:
		int			fixed_point;
		static int const	fract_bit;
	public:
		Fixed(void);
		//a copy constructor.
		//a copy assignment operator overload.
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);


};

#endif
