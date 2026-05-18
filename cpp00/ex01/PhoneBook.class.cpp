/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:00:57 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 17:13:57 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

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

int	PhoneBook::id[8];
int	PhoneBook::nbr_contact = 0;

int	PhoneBook::ft_add_contacts(int i)
{
	std::string	first_name;	
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;


	std::cout << "First Name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);

	if (first_name.empty() || last_name.empty() || nickname.empty() || darkest_secret.empty() || phone_number.empty())
	{
		std::cout << "A Contact cannot have empty field" << std::endl;
		std::cin.clear();
		return (-1);
	}
	this->contacts[i].ft_add_oldest(i);
	this->contacts[i].ft_add_first_name(first_name);
	this->contacts[i].ft_add_last_name(last_name);
	this->contacts[i].ft_add_nickname(nickname);
	this->contacts[i].ft_add_phone_number(phone_number);
	this->contacts[i].ft_add_darkest_secret(darkest_secret);

	nbr_contact++;
	this->id[i] = i;
	return (0);
}

int	PhoneBook::ft_find_oldest(void)
{
	int	i;
	int	oldest_id;
	int	tmp;

	i = 0;
	oldest_id = 999;
	while(i < nbr_contact)
	{
		tmp = oldest_id;
		oldest_id = this->contacts[i].ft_get_oldest();
		if (oldest_id > tmp)
			oldest_id = tmp;
		
		i++;
	}
	return (oldest_id);
}

void	PhoneBook::ft_replace_oldest(int oldest_id, int i)
{
	std::string	first_name;	
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	this->contacts[oldest_id].ft_add_oldest(i);

	std::cout << "First Name: ";
	std::getline(std::cin, first_name);
	this->contacts[oldest_id].ft_add_first_name(first_name);

	std::cout << "Last Name: ";
	std::getline(std::cin, last_name);
	this->contacts[oldest_id].ft_add_last_name(last_name);

	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	this->contacts[oldest_id].ft_add_nickname(nickname);

	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	this->contacts[oldest_id].ft_add_phone_number(phone_number);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);
	this->contacts[oldest_id].ft_add_darkest_secret(darkest_secret);
}

// find a spesefic contacts in PhoneBook by id

void	PhoneBook::ft_search_contacts(void)
{
	int		search_id;
	std::string	first_name;	
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Please provide the index number: ";
	std::cin >> search_id;	
	
	if (std::cin.fail() || (search_id < 0 || search_id > 7))
	{
		std::cout << "Provided index is not valid" << std::endl;
		std::cin.clear();
		return ;
	}
	if (search_id < nbr_contact)
	{
		first_name = this->contacts[search_id].ft_get_first_name("no");
		last_name = this->contacts[search_id].ft_get_last_name("no");
		nickname = this->contacts[search_id].ft_get_nickname("no");
		phone_number = this->contacts[search_id].ft_get_phone_number();
		darkest_secret = this->contacts[search_id].ft_get_darkest_secret(); 

		std::cout << "First Name: " << first_name << std::endl;
		std::cout << "Last Name: " << last_name << std::endl;
		std::cout << "Nickname: " << nickname << std::endl;
		std::cout << "Phone Number: " << phone_number << std::endl;
		std::cout << "Darkest Secret: " << darkest_secret << std::endl;
	}
}


// display PhoneBook table to show all the contacts in PhoneBook

void	PhoneBook::ft_display_contacts(void)
{
	std::string	first_name;	
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int		i;

	i = 0;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(11) << "Nickname|" << std::endl;
	while(i < nbr_contact)
	{
		first_name = this->contacts[i].ft_get_first_name("sub");
		last_name = this->contacts[i].ft_get_last_name("sub");
		nickname = this->contacts[i].ft_get_nickname("sub");

		std::cout << "|" << std::setw(10) << this->id[i];
		std::cout << "|" << std::setw(10) << first_name;
		std::cout << "|" << std::setw(10) << last_name;
		std::cout << "|" << std::setw(10) << nickname << "|";
		std::cout << std::endl;
		i++;
	}
}
