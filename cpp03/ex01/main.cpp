/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:41:13 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/25 16:48:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "===== ScavTrap Tests =====" << std::endl;

	ScavTrap	s1("Guardian");
	ScavTrap	s2(s1);

	s1.printScavTrap();
	s2.printScavTrap();
	// s2.setName("ekram");
	s2.printScavTrap();
	std::cout << std::endl;

	s1.attack("Enemy");
	s1.guardGate();

	std::cout << std::endl;

	s1.takeDamage(30);
	s1.beRepaired(10);

	std::cout << std::endl;

	ScavTrap	s3;
	s3 = s1;

	// std::cout << "Name: " << s3.getName() << std::endl;
	// std::cout << "HP: " << s3.getHitPoints() << std::endl;
	// std::cout << "Energy: " << s3.getEnergyPoints() << std::endl;
	// std::cout << "Attack: " << s3.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "===== Energy Test =====" << std::endl;

	for (int i = 0; i < 51; i++)
		s1.attack("Target");

	std::cout << std::endl;

	std::cout << "===== Death Test =====" << std::endl;

	s1.takeDamage(200);
	s1.attack("Target");
	s1.beRepaired(20);
	s1.guardGate();

	std::cout << std::endl;

	std::cout << "===== End of Program =====" << std::endl;

	return (0);
}
