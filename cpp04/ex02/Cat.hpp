/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:25:07 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/26 15:55:46 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class	Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(std::string const type);
		~Cat();

		Cat(Cat const &rhs);
		Cat	&operator=(Cat const &rhs);
		
		void	makeSound() const;
	
		void	setIdea(int id, std::string const idea);
		void	printIdea(int id) const;

		void	printBrainAddress() const;
};

#endif
