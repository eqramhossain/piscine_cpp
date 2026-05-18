/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:31:43 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 18:55:59 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{
	private:
		std::string		_type;

	public:
		Weapon(std::string str);
		~Weapon(void);
		
		const std::string	&getType(void) const;
		void			setType(std::string new_value);
};

#endif
