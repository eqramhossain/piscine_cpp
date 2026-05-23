/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:41:13 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 19:15:42 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "===== FragTrap Tests =====" << std::endl;

	// Default constructor
	FragTrap a;

	std::cout << std::endl;

	// Parameterized constructor
	FragTrap b("Pizza");

	std::cout << std::endl;

	// Copy constructor
	FragTrap c(b);

	std::cout << std::endl;

	// Copy assignment operator
	FragTrap d;
	d = b;

	std::cout << std::endl;

	// Basic actions
	b.attack("Pasta");
	b.takeDamage(40);
	b.beRepaired(20);

	std::cout << std::endl;

	// Special FragTrap function
	b.highFivesGuys();

	std::cout << std::endl;

	// Energy / HP stress test
	for (int i = 0; i < 5; i++)
		b.attack("Target Dummy");

	std::cout << std::endl;

	b.takeDamage(200); // should kill the FragTrap
	b.attack("Another Enemy"); // test behavior when dead
	b.beRepaired(50); // test repair when dead

	std::cout << std::endl;

	std::cout << "===== End of Tests =====" << std::endl;

	return (0);
}
