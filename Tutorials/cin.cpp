/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cin.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 18:57:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/12 19:09:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int main(void)
{

	std::string name;
	int age;
	int postcode;

	std::cout << "please give your name\n";
	std::getline(std::cin, name);
	std::cout << "your age\n";
	std::cin >> age;
	std::cout << "your postcode\n";
	std::cin >> postcode;
	std::cout << "name is " << name << " age is " << age << " postcode is " << postcode << std::endl;
	int myint;
	std::stringstream(name) >> myint;
	std::cout << myint;
	return (0);
}
