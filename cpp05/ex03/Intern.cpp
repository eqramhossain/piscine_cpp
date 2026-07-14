/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:02:12 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/14 19:01:06 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include <iostream>
#include <string>

Intern::Intern()
{
	this->_form_name[0] = "shrubbery creation";
	this->_form_name[1] = "presidential pardon";
	this->_form_name[2] = "robotmy request";

	std::cout << "Default Constructor Called Intern" << std::endl;
}

Intern::Intern(Intern &rhs)
{
	(void)rhs;
	std::cout << "Copy Constructor Called Intern" << std::endl;
}

Intern &Intern::operator=(Intern &rhs)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		(void)rhs;
		// nothing to copy
	}
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor Called Intern" << std::endl;
}

AForm *Intern::callShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::callPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::callRobot(std::string target)
{
	return new RobotmyRequestForm(target);
}

std::string Intern::stringLower(std::string str)
{
	for (int c = 0; c < int(str.length()); c++)
	{
		if (std::isupper(str[c]))
			str[c] = char(std::tolower(str[c]));
	}
	return (str);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	int i = 0;

	AForm	*(Intern::*func[3])(std::string target) =
	{
		&Intern::callShrubbery,
		&Intern::callPresidential,
		&Intern::callRobot,
	};

	while (i < 3)
	{
		if (_form_name[i] == stringLower(name))
		{
			return (this->*func[i])(target);
		}
		i++;
	}
	throw Intern::FormNameException();
}

const char* Intern::FormNameException::what() const throw()
{
	return ("Form name does not exist");
}
