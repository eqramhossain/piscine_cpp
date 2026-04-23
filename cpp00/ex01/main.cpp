/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 23:20:53 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/23 15:09:16 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include <cstdlib>

int	main(void)
{
	std::string	cmd;
	static int	i;
	int		oldest_id; 
	PhoneBook	phonebook;

	i = 0;
	while(1)
	{
		std::cin.clear();
		std::cout << "-> ";
		std::getline(std::cin, cmd);
		// std::cin >> cmd;
		if (cmd == "ADD")
		{
			phonebook.ft_add_contacts(i);
			i++;
		}
		else if (cmd == "ADD" && i >= 8)
		{
			oldest_id = phonebook.ft_find_oldest();
			phonebook.ft_replace_oldest(oldest_id);
			i++;
		}
		else if (cmd == "SEARCH")
		{
			phonebook.ft_search_contacts();
			phonebook.ft_display_contacts();
		}
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}
