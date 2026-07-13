/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:36:26 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 22:31:11 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"
#include "AForm.h"
#include "Bureaucrat.h"
#include <cstdlib>
#include <iostream>

RobotmyRequestForm::RobotmyRequestForm(void) : AForm("Default", 72, 45), _target("Default")
{
	
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) : AForm("Default", 72, 45), _target(target)
{
	
}

RobotmyRequestForm::~RobotmyRequestForm()
{
	
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
