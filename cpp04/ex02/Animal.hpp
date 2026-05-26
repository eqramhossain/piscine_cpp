/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:24:05 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 16:28:25 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class	Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string const type);
		virtual ~Animal();

		Animal(Animal const &rhs);
		Animal	&operator=(Animal const &rhs);
		
		virtual void	makeSound() const = 0;

		void	setType(std::string const type);
		std::string	getType(void) const;
};

#endif
