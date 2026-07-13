/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:36:34 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 22:39:38 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"
#include "AForm.h"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm() 
{

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
