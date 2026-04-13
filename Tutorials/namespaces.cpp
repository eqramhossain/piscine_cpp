/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:46:16 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/13 11:50:09 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace ekram
{
	int age = 42;
	int postcode = 93;
	std::string name = "ekram";
}

int main(void)
{
	std::cout << ekram::age << "\n";
	std::cout << ekram::postcode << "\n";
	std::cout << ekram::name << "\n";
	return (0);
}
