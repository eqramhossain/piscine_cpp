/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:36:34 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/06 20:08:32 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"
#include "AForm.h"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void)
{
	// std::cout << "Default Constructor Called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 25, 5), _target(target)
{
	// std::cout << "Parameterazied Constructor Called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
	// std::cout << "Destructor Called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm(rhs), _target(rhs._target)
{
	// std::cout << "Copy Constructor Called PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	// std::cout << "Copy Assignment operator Called PresidentialPardonForm" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->canExecute(executor) == false)
	{
		return ;
	}
	else 
	{
		std::cout << "Informs that " << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
