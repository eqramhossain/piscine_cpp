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

int	main(void)
{
	// test constructor and copy constructor
	ClapTrap	a("RobotA");
	ClapTrap	b("RobotB");
	ClapTrap	c(a);

	// test public member functions
	std::cout << std::endl;

	a.attack("RobotB");
	b.takeDamage(0);

	std::cout << std::endl;

	b.setAttackDamage(5);
	b.attack("RobotA");
	a.takeDamage(4);

	std::cout << std::endl;

	a.beRepaired(3);

	std::cout << std::endl;

	// test copy assignment constructor
	ClapTrap	d;
	d = b;

	// test getter functions
	std::cout << std::endl;

	std::cout << "Name: " << d.getName() << std::endl;
	std::cout << "HP: " << d.getHitPoints() << std::endl;
	std::cout << "Energy: " << d.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << d.getAttackDamage() << std::endl;

	std::cout << std::endl;

	// Testing energy
	for (int i = 0; i < 11; i++)
		a.attack("Enemy");

	std::cout << std::endl;

	// Testing death
	a.takeDamage(100);
	a.attack("Enemy");
	a.beRepaired(5);

	return (0);
}
