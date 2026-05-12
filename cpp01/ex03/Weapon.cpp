/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:32:19 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/12 11:03:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void			Weapon::setType(std::string new_value)
{
	this->type = new_value;
}

