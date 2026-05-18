/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:33:21 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 19:05:02 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

// member initializer list 

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{

}

const std::string	HumanA::getName() const
{
	return (this->_name);
}

const std::string	HumanA::getType() const
{
	return (this->_weapon.getType());
}

void		HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << getType() << std::endl;
}


