/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:00:57 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/23 00:14:24 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void)
{
	std::cout << "/* ************************************ */" << std::endl;
	std::cout << "/*      HELLO WELCOME TO PHONEBOOK      */" << std::endl;
	std::cout << "/* ************************************ */" << std::endl;
	std::cout << "/* ACCEPTED COMMANDS:                   */" << std::endl;
	std::cout << "/* ADD    : TO ADD A NEW CONTACT        */" << std::endl;
	std::cout << "/* SEARCH : TO SEARCH A CONTACT         */" << std::endl; 
	std::cout << "/* EXIT   : EXIT FROM PHONEBOOK         */" << std::endl;
	std::cout << "/* ************************************ */" << std::endl;
	std::cout << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::id = 0;
int	PhoneBook::i = 0;

void	PhoneBook::ft_add_contacts(void)
{
	std::string	first_name;	
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "First Name: ";
	std::cin >> first_name;
	this->contacts[id].ft_add_first_name(first_name);
	std::cout << "Last Name: ";
	std::cin >> last_name;
	this->contacts[id].ft_add_last_name(last_name);
	std::cout << "Nickname: ";
	std::cin >> nickname;
	this->contacts[id].ft_add_nickname(nickname);
	std::cout << "Phone Number: ";
	std::cin >> phone_number;
	this->contacts[id].ft_add_phone_number(phone_number);
	std::cout << "Darkest Secret: ";
	std::cin >> darkest_secret;
	this->contacts[id].ft_add_darkest_secret(darkest_secret);
	id++;
	std::cout << id << std::endl;
}

void	PhoneBook::ft_replace_contact(void)
{
}

void	PhoneBook::ft_search_contacts(void)
{
}

void	PhoneBook::ft_display_contacts(void)
{
	std::string	first_name;	
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	while(i < id)
	{
		first_name = this->contacts[i].ft_get_first_name();
		last_name = this->contacts[i].ft_get_last_name();
		nickname = this->contacts[i].ft_get_nickname();
		phone_number = this->contacts[i].ft_get_phone_number();
		darkest_secret = this->contacts[i].ft_get_darkest_secret();
		std::cout << "first_name = " << first_name << std::endl;
		std::cout << "last_name = " << last_name << std::endl;
		std::cout << "nickname = " << nickname << std::endl;
		std::cout << "phone_number = " << phone_number << std::endl;
		std::cout << "darkest_secret = " << darkest_secret << std::endl;
		i++;
	}
}
