/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:46:36 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 18:59:10 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	_name = "";
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	_name = name;
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " has been constructed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "Copy constructor called, copy from FragTrap " << rhs._name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Copy assignment operator called, copy from FragTrap " << rhs._name << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests a high five! ✋" << std::endl;
}
