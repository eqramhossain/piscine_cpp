/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:19:37 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/23 00:03:19 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact(void);
		~Contact(void);

		void	ft_add_first_name(std::string add_first_name);
		std::string	ft_get_first_name(void);
		void	ft_add_last_name(std::string add_last_name);
		std::string	ft_get_last_name(void);
		void	ft_add_nickname(std::string add_nickname);
		std::string	ft_get_nickname(void);
		void	ft_add_phone_number(std::string add_phone);
		std::string	ft_get_phone_number(void);
		void	ft_add_darkest_secret(std::string add_darkest_secret);
		std::string	ft_get_darkest_secret(void);
};

#endif
