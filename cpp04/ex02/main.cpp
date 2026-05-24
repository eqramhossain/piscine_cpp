/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:49:20 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 19:00:33 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	/* ******************************************************** */
	/*                    SUBJECT TEST                          */
	/* ******************************************************** */

	std::cout << "\n========== SUBJECT TEST ==========\n" << std::endl;

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Dog type : " << dog->getType() << std::endl;
	std::cout << "Cat type : " << cat->getType() << std::endl;

	std::cout << "\nAnimal sounds:\n" << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n========== DELETE THROUGH BASE POINTER ==========\n" << std::endl;

	delete dog;
	delete cat;

	/* ******************************************************** */
	/*                 ARRAY OF ANIMALS                         */
	/* ******************************************************** */

	std::cout << "\n========== ARRAY OF ANIMALS ==========\n" << std::endl;

	const int size = 6;
	Animal* animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n========== POLYMORPHIC SOUNDS ==========\n" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "[" << i << "] ";
		std::cout << animals[i]->getType() << " -> ";
		animals[i]->makeSound();
	}

	std::cout << "\n========== DELETE ARRAY ==========\n" << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];

	/* ******************************************************** */
	/*                    DOG DEEP COPY                         */
	/* ******************************************************** */

	std::cout << "\n========== DOG DEEP COPY TEST ==========\n" << std::endl;

	Dog originalDog;

	originalDog.setIdea(0, "Eat");
	originalDog.setIdea(1, "Sleep");
	originalDog.setIdea(2, "Play");

	std::cout << "Original Dog brain address : ";
	originalDog.printBrainAddress();

	Dog copiedDog(originalDog);

	std::cout << "Copied Dog brain address   : ";
	copiedDog.printBrainAddress();

	std::cout << "\nOriginal Dog ideas BEFORE modification:\n" << std::endl;
	originalDog.getIdea();

	std::cout << "\nCopied Dog ideas BEFORE modification:\n" << std::endl;
	copiedDog.getIdea();

	std::cout << "\n========== MODIFY ORIGINAL DOG ==========\n" << std::endl;

	originalDog.setIdea(0, "Destroy sofa");

	std::cout << "\nOriginal Dog ideas AFTER modification:\n" << std::endl;
	originalDog.getIdea();

	std::cout << "\nCopied Dog ideas (must stay unchanged):\n" << std::endl;
	copiedDog.getIdea();

	/* ******************************************************** */
	/*                    CAT DEEP COPY                         */
	/* ******************************************************** */

	std::cout << "\n========== CAT DEEP COPY TEST ==========\n" << std::endl;

	Cat originalCat;

	originalCat.setIdea(0, "Sleep");
	originalCat.setIdea(1, "Ignore humans");
	originalCat.setIdea(2, "Destroy curtains");

	std::cout << "Original Cat brain address : ";
	originalCat.printBrainAddress();

	Cat copiedCat(originalCat);

	std::cout << "Copied Cat brain address   : ";
	copiedCat.printBrainAddress();

	std::cout << "\nOriginal Cat ideas BEFORE modification:\n" << std::endl;
	originalCat.getIdea();

	std::cout << "\nCopied Cat ideas BEFORE modification:\n" << std::endl;
	copiedCat.getIdea();

	std::cout << "\n========== MODIFY ORIGINAL CAT ==========\n" << std::endl;

	originalCat.setIdea(0, "Steal food");

	std::cout << "\nOriginal Cat ideas AFTER modification:\n" << std::endl;
	originalCat.getIdea();

	std::cout << "\nCopied Cat ideas (must stay unchanged):\n" << std::endl;
	copiedCat.getIdea();

	std::cout << "\n========== END OF PROGRAM ==========\n" << std::endl;

	return (0);
}
