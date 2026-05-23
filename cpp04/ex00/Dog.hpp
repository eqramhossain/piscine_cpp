/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:25:45 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 20:51:28 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>

class	Dog : public Animal
{
	public:
		Dog();
		Dog(std::string const type);
		~Dog();

		Dog(Dog const &rhs);
		Dog	&operator=(Dog const &rhs);
		
		void	makeSound();
};


#endif
