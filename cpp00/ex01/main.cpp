/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 23:20:53 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 16:56:53 by ehossain         ###   ########.fr       */
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
		std::cout << "->";
		std::cin.clear();
		cmd.clear();
		std::getline(std::cin, cmd);
		if (cmd == "ADD" && i < 8)
		{
			if (phonebook.ft_add_contacts(i) == 0)
				i++;
		}
		else if (cmd == "ADD" && i >= 8)
		{
			oldest_id = phonebook.ft_find_oldest();
			phonebook.ft_replace_oldest(oldest_id, i);
			i++;
		}
		else if (cmd == "SEARCH")
		{
			phonebook.ft_display_contacts();
			phonebook.ft_search_contacts();
		}
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}
