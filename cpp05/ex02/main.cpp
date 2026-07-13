/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 21:02:46 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 22:40:11 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include <iostream>

int main(void)
{
	Bureaucrat bureaucrat("ekram", 10);
	std::cout << bureaucrat << std::endl;

	ShrubberyCreationForm shrubbery("france");
	std::cout << shrubbery << std::endl;

	bureaucrat.signForm(shrubbery);	
	bureaucrat.executeForm(shrubbery);

	RobotmyRequestForm robot("robot");
	bureaucrat.signForm(robot);	
	bureaucrat.executeForm(robot);

	PresidentialPardonForm president("president");
	bureaucrat.signForm(president);	
	bureaucrat.executeForm(president);


	return (0);
}
