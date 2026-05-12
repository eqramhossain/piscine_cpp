/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:33:57 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/12 16:26:29 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
}

// HumanB::HumanB(std::string name, Weapon &weapon): name(name), weapon(weapon){}

HumanB::~HumanB(void)
{

}

void		HumanB::attack(void)
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
