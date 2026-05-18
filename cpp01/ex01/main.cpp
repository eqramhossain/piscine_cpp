/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:19:38 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 17:28:00 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i; 
	Zombie	*first;

	i = 0;
	first = zombieHorde(10, "Foo");
	while(i < 10)
	{
		first[i].announce();
		i++;
	}
	delete [] first;
	return (0);
}
