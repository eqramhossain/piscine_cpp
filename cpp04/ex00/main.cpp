/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:49:20 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 14:49:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "\n========== BASIC POLYMORPHISM ==========\n" << std::endl;

	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << "\n---------- TYPES ----------\n" << std::endl;

	std::cout << "meta type: " << meta->getType() << std::endl;
	std::cout << "dog type : " << j->getType() << std::endl;
	std::cout << "cat type : " << i->getType() << std::endl;

	std::cout << "\n---------- SOUNDS ----------\n" << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << "\n========== DESTRUCTION ==========\n" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n========== WRONG ANIMAL TEST ==========\n" << std::endl;

	const WrongAnimal*	wrong = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << "\n---------- TYPES ----------\n" << std::endl;

	std::cout << wrong->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;

	std::cout << "\n---------- SOUNDS ----------\n" << std::endl;

	wrong->makeSound();
	wrongCat->makeSound();

	std::cout << "\n========== DELETION ==========\n" << std::endl;


	delete wrong;
	delete wrongCat;

	return (0);
}
