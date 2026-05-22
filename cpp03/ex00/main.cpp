/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:41:13 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/22 20:29:30 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap cat("Cat");

	cat.attack("Dog");
	cat.beRepaired(18);
	cat.takeDamage(20);
	return (0);
}
