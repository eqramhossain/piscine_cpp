/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:31:01 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 14:55:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string const type);
		~WrongAnimal();

		WrongAnimal(WrongAnimal const &rhs);
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		
		void	makeSound() const;

		void		setType(std::string const type);
		std::string	getType(void) const;
};

#endif
