/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cout.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 18:26:05 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/12 18:55:44 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int a = 42;
	std::cout << a << "\nthis is an error msg\n";
	std::cout << "hello i am " << a << " years old";
	std::cout << std::endl << "hello" << std::endl;
	return (0);
}
