/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:18:55 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/22 23:27:22 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.class.hpp"

class	PhoneBook
{
	private:
		static int	id;
		static int	i;
		Contact		contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	ft_add_contacts(void);
		void	ft_replace_contact(void);
		void	ft_search_contacts(void);
		void	ft_display_contacts(void);
};

#endif
