/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 23:20:53 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/22 23:24:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include <cstdlib>

int	main(void)
{
	std::string	cmd;
	static int	i;
	PhoneBook	phonebook;

	while(1)
	{
		std::cout << "-> ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			phonebook.ft_add_contacts();
			i++;
		}
		// else if (cmd == "ADD" && i >= 8)
		// {
		// 	phonebook.ft_replace_contact();
		// 	i++;
		// }
		else if (cmd == "SEARCH")
		{
			phonebook.ft_search_contacts();
			phonebook.ft_display_contacts();
		}
		else if (cmd == "EXIT")
			break;
		else
			continue;
	}
	return (0);
}
