/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:00:43 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/22 20:40:22 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap():
	_name(""), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_point = rhs._hit_point;
		this->_energy_point = rhs._energy_point;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage!

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " does not have any _hit_point, Can't attack" << std::endl;
		return ;
	}
	if (this->_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " does not have any _energy_point, Can't attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attack_damage;
	std::cout << " points of damage!" << std::endl;

	this->_energy_point -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_point < amount)
		this->_hit_point = 0;
	else
		this->_hit_point -= amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " taking damage";
	std::cout << " causing " << amount;
	std::cout << " points of damage! ";
	std::cout << "_hit_point = " << this->_hit_point << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " does not have any _hit_point, Can't beRepaired" << std::endl;
		return ;
	}
	if (this->_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " does not have any _energy_point, Can't beRepaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << " is being Repaired";
	std::cout << " causing " << amount;
	std::cout << " points of energy_point" << std::endl;

	this->_energy_point -= 1;
	this->_hit_point += amount;
}
