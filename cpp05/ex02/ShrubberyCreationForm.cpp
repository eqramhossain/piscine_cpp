/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:36:18 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 20:52:31 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"
#include "AForm.h"
#include <iostream>
#include <ostream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Default", 145, 137), _target("Default")
{
	std::cout << "Default Constuctor Called ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137), _target(target)
{
	std::cout << "Parameteraized Constuctor Called ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &rhs): AForm(rhs)
{
	std::cout << "Copy Constuctor Called ShrubberyCreationForm" << std::endl;
	*this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	std::cout << "Copy Operator Called ShrubberyCreationForm" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor Called ShrubberyCreationForm" << std::endl;
}

std::string ShrubberyCreationForm::get_target(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if(this->canExecute(executor) == false)
	{
		return ;
	}
	else 
	{
		std::ofstream MyFile;
		MyFile.open("test");

		if (!MyFile.is_open())
		{
			std::cout << "Error in creating file!" << std::endl;
			return ;
		}
		MyFile << "        *\n"
          "       ***\n"
          "      *****\n"
          "     *******\n"
          "    *********\n"
          "   ***********\n"
          "  *************\n"
          "       ||\n"
          "       ||\n"
          "       ||\n";
		MyFile.close();
	}
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &rhs)
{
	std::cout << "Target = " << rhs.get_target()  << "_shrubbery" << std::endl;
	return(out);
}
