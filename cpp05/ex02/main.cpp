/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 21:02:46 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 20:23:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include <exception>
#include <iostream>

int main(void)
{
	Bureaucrat bureaucrat("ekram", 150);
	std::cout << bureaucrat << std::endl;

	ShrubberyCreationForm shrubbery("france");
	std::cout << shrubbery << std::endl;

	bureaucrat.signForm(shrubbery);	
	try
	{
		bureaucrat.executeForm(shrubbery);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
