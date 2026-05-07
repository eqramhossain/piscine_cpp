/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 23:50:56 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/07 20:01:35 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie *array = new Zombie[N];
	
	i = 0;
	while(i < N)
	{
		array[i].set_name(name);
		i++;
	}
	return (array);
}
