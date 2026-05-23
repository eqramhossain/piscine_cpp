/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:45:35 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 18:40:23 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		~FragTrap();

		FragTrap(FragTrap const &rhs);
		FragTrap	&operator=(FragTrap const &rhs);

		void	highFivesGuys(void);

};

#endif
