/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:00:43 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/25 18:59:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap():
	_name("Default"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name):
	_name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) :
	_name(rhs._name), _hit_point(rhs._hit_point), _energy_point(rhs._energy_point), _attack_damage(rhs._attack_damage)
{
	std::cout << "ClapTrap Copy constructor called, copy from " << rhs._name << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Copy assignment operator called, copy from " << rhs._name << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_point = rhs._hit_point;
		this->_energy_point = rhs._energy_point;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_point == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " doesn't have any hit_point, Can't attack" << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " doesn't have any energy_point, Can't attack" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacking " << target;
	std::cout << " causing " << this->_attack_damage;
	std::cout << " points of damage!" << std::endl;

	this->_energy_point -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_point <= amount)
	{
		this->_hit_point = 0;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no more hit_points, can't take damage" << std::endl;
		return ;
	}
	else
	{
		this->_hit_point -= amount;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " taking damage";
		std::cout << " causing " << amount;
		std::cout << " points of damage! " << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " doesn't have any hit_point, Can't beRepaired" << std::endl;
		return ;
	}
	if (this->_energy_point == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " doesn't have any energy_point, Can't beRepaired" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name;
	std::cout << " is being Repaired";
	std::cout << " gains " << amount << " hit_points" << std::endl;

	this->_energy_point -= 1;
	this->_hit_point += amount;
}

// void	ClapTrap::setName(std::string name)
// {
// 	this->_name = name;
// }
//
// void	ClapTrap::setHitPoints(unsigned int hit_point)
// {
// 	this->_hit_point = hit_point;
// }
//
// void	ClapTrap::setEnergyPoints(unsigned int energy_point)
// {
// 	this->_energy_point = energy_point;
// }
//
// void	ClapTrap::setAttackDamage(unsigned int attack_damage)
// {
// 	this->_attack_damage = attack_damage;
// }
//
// std::string	ClapTrap::getName(void) const
// {
// 	return (this->_name);
// }
//
// unsigned int	ClapTrap::getHitPoints(void) const
// {
// 	return (this->_hit_point);
// }
//
// unsigned int	ClapTrap::getEnergyPoints(void) const
// {
// 	return (this->_energy_point);
// }
//
// unsigned int	ClapTrap::getAttackDamage(void) const
// {
// 	return (this->_attack_damage);
// }
