/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_codefinity.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:05:45 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/11 17:11:00 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_increment_pointer(int *ptr)
{
	if (ptr)
	{
		(*ptr)++;
	}
}

void	ft_increment_reference(int &ref)
{
	ref++;
}

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;

	// incrementing by pointer 
	ft_increment_pointer(&a);

	// incrementing by references
	ft_increment_reference(b);

	std::cout << "Values after incrementation: \n";
	std::cout << "a = " << a << " (incremented by pointer)\n";
	std::cout << "b = " << b << " (incremented by reference)\n";

	return (0);
}
