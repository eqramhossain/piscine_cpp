/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:33:57 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 19:29:41 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}

HumanB::~HumanB()
{

}

const std::string	HumanB::getName() const
{
	return (this->_name);
}

const std::string	HumanB::getType() const
{
	return (this->_weapon->getType());
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void		HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << getType() << std::endl;
}
