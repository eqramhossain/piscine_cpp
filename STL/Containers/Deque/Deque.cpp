/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 18:34:43 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/09 20:07:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>

/* 
 *
 * A deque (Double-Ended Queue) is a sequence container in the C++ Standard Template Library (STL) 
 * that combines the advantages of both vectors and queues. It supports efficient operations at 
 * both ends while allowing direct access to elements.
 * */

int		main(void)
{
	std::deque<int> d;

	std::cout << d.size() << std::endl;

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);

	for(size_t i = 0; i < d.size(); i++)
	{
		std::cout << d[i] << std::endl;
	}


	return (0);
}
