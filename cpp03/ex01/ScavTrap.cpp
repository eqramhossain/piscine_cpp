/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:34:35 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 17:28:01 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " has been constructed" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
	// copy only ScavTrap-specific fields here (if any)
	std::cout << "Copy constructor called, copy from ScavTrap " << rhs._name << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Copy assignment operator called, copy from ScavTrap " << rhs._name << std::endl;

	if (this != &rhs)
	{
		ClapTrap::operator=(rhs); // copy base part

		// copy derived part here (if any)
	}
	return (*this);

}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hit_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " does not have any hit_point, Can't attack" << std::endl;
		return ;
	}
	if (this->_energy_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " does not have any energy_point, Can't attack" << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->_name;
	std::cout << " attacking " << target;
	std::cout << " causing " << this->_attack_damage;
	std::cout << " points of damage!" << std::endl;

	this->_energy_point -= 1;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::printScavTrap(void)
{
	std::cout << "name = " << this->_name << std::endl;
	std::cout << "hit_point = " << this->_hit_point << std::endl;
	std::cout << "energy_point = " << this->_energy_point << std::endl;
	std::cout << "attack_damage = " << this->_attack_damage << std::endl;
}
