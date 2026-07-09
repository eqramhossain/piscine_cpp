/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:47:22 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 18:56:47 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Test ex01" << "\033[0m" << std::endl;

	Form id_form("ID FORM", 100, 90);
	Bureaucrat mr_slow("mr_slow", 25);
	Bureaucrat mr_id("MR_ID", 100);
	std::cout << id_form;
	
	mr_slow.signForm(id_form);
	std::cout << id_form;

	mr_id.signForm(id_form);
	std::cout << id_form;
	
	return (0);	return (0);
}
