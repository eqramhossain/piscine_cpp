/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:33:21 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/12 16:19:46 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}
// {
// 	this->name = name;
// 	this->weapon = weapon;
// }

HumanA::~HumanA(void)
{

}

void		HumanA::attack(void)
{
	std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
}
