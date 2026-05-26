/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:31:03 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 14:55:36 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string const type);
		~WrongCat();

		WrongCat(WrongCat const &rhs);
		WrongCat	&operator=(WrongCat const &rhs);
		
		void	makeSound() const;
};

#endif
