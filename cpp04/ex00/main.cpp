/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:49:20 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/23 20:52:40 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	Animal	animal;
	Cat		cat;
	Dog		dog;

	animal.makeSound();
	cat.makeSound();
	dog.makeSound();
	return (0);
}
