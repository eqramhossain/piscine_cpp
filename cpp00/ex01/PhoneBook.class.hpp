/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:18:55 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/06 18:46:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.class.hpp"

class	PhoneBook
{
	private:
		static int	id[8];
		static int	nbr_contact;
		Contact		contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		int	ft_add_contacts(int i);
		int	ft_find_oldest(void);
		void	ft_replace_oldest(int oldest_id, int i);
		void	ft_search_contacts(void);
		void	ft_display_contacts(void);
};

#endif
