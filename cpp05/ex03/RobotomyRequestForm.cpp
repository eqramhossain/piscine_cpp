/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:36:26 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/14 16:33:15 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"
#include "AForm.h"
#include "Bureaucrat.h"
#include <cstdlib>
#include <iostream>

RobotmyRequestForm::RobotmyRequestForm(void) : AForm("Default", 72, 45), _target("Default")
{
	std::cout << "Default Constructor Called RobotmyRequestForm" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) : AForm(target, 72, 45), _target(target)
{
	std::cout << "Parameterazied Constructor Called RobotmyRequestForm" << std::endl;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
	std::cout << "Destructor Called RobotmyRequestForm" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm &rhs) : AForm(rhs), _target(rhs._target)
{
	std::cout << "Copy Constructor Called RobotmyRequestForm" << std::endl;
}

RobotmyRequestForm &RobotmyRequestForm::operator=(RobotmyRequestForm &rhs)
{

	std::cout << "Copy Assignment operator Called RobotmyRequestForm" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return (*this);
}

void RobotmyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->canExecute(executor) == false)
	{
		return ;
	}
	else 
	{
		if ((std::rand() / 2) == 0)
		{
			std::cout << executor.getName() << " RobotmyRequestForm failded " << this->_target << std::endl;
		}
		else 
		{
			std::cout << "Making some driling noise " << this->_target << " has been robotomized successfully \
				50% of the time" << std::endl;
		}
	}
}
