/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:07:34 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/07 19:58:15 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	set_name(std::string name);


};

Zombie	*newZombie();
Zombie	*zombieHorde(int N, std::string name);

#endif
