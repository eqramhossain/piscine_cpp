/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:41:13 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/25 19:14:58 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "===== Creating FragTrap =====" << std::endl;
	FragTrap frag("Fraggy");

	std::cout << "\n===== Initial attack =====" << std::endl;
	frag.attack("Bandit");

	std::cout << "\n===== Taking damage =====" << std::endl;
	frag.takeDamage(40);

	std::cout << "\n===== Repairing =====" << std::endl;
	frag.beRepaired(20);

	std::cout << "\n===== Special ability =====" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n===== Multiple attacks =====" << std::endl;
	frag.attack("Enemy1");
	frag.attack("Enemy2");
	frag.attack("Enemy3");

	std::cout << "\n===== Heavy damage =====" << std::endl;
	frag.takeDamage(90);

	std::cout << "\n===== Dead FragTrap behavior =====" << std::endl;
	frag.attack("Nobody");
	frag.beRepaired(10);
	frag.highFivesGuys();

	std::cout << "\n===== End of program =====" << std::endl;

	return (0);
}
