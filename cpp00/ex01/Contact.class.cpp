/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:55:15 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/23 20:21:33 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::ft_add_first_name(std::string add_first_name)
{
	this->first_name = add_first_name;
}

std::string	Contact::ft_get_first_name(void)
{
	return (this->first_name);
}

void	Contact::ft_add_last_name(std::string add_last_name)
{
	this->last_name = add_last_name;
}

std::string	Contact::ft_get_last_name(void)
{
	return (this->last_name);
}

void	Contact::ft_add_nickname(std::string add_nickname)
{
	this->nickname = add_nickname;
}

std::string	Contact::ft_get_nickname(void)
{
	return (this->nickname);
}

void	Contact::ft_add_phone_number(std::string add_phone)
{
	this->phone_number = add_phone;
}

std::string	Contact::ft_get_phone_number(void)
{
	return (this->phone_number);
}

void	Contact::ft_add_darkest_secret(std::string add_darkest_secret)
{
	this->darkest_secret = add_darkest_secret;
}

std::string	Contact::ft_get_darkest_secret(void)
{
	return (this->darkest_secret);
}

void		Contact::ft_add_oldest(int oldest)
{
	this->is_oldest = oldest;
}

int		Contact::ft_get_oldest(void)
{
	return (this->is_oldest);
}
