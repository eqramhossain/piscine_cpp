/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:31:03 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 15:29:05 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class	WrongCat : public WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongCat();
		WrongCat(std::string const type);
		~WrongCat();

		WrongCat(WrongCat const &rhs);
		WrongCat	&operator=(WrongCat const &rhs);
		
		void	makeSound() const;
};

#endif
