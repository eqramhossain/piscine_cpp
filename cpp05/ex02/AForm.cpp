/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:03:51 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 20:16:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"
#include <string>
#include <iostream>

AForm::AForm(void) : _name("Default"), _is_signed(false), _grade_sign(1), _grade_execute(1)
{
	std::cout << "Default Constructor called AForm" << std::endl;
}

AForm::AForm(std::string name, int sign, int execute) : _name(name), _is_signed(false), _grade_sign(sign), _grade_execute(execute)
{
	std::cout << "Parameteraized Constructor called AForm" << std::endl;
}

AForm::AForm(AForm &rhs) : _name(rhs._name), _is_signed(rhs._is_signed), _grade_sign(rhs._grade_sign), _grade_execute(rhs._grade_execute)
{
	std::cout << "Copy Constructor called AForm" << std::endl;
}

AForm	&AForm::operator=(AForm &rhs) 
{
	std::cout << "Copy Assignment operator called AForm" << std::endl;
	if (this != &rhs)
	{
		this->_is_signed = rhs._is_signed;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor called AForm" << std::endl;
}

std::string AForm::get_name(void) const
{
	return (this->_name);
}

bool AForm::get_is_signed(void) const
{
	return (this->_is_signed);
}

int AForm::get_sign_value(void) const
{
	return (this->_grade_sign);
}

int AForm::get_execute_value(void) const
{
	return (this->_grade_execute);
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_sign)
	{
		_is_signed = true;
	}
	else 
	{
		throw AForm::GradeTooLowException();
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

const char *AForm::GradeNotSignedException::what() const throw()
{
	return ("Grade is not Signed");
}

bool AForm::canExecute(Bureaucrat const &executor) const
{
	if (this->_is_signed == false)
	{
		throw AForm::GradeNotSignedException();
		return (false);
	}
	if (executor.getGrade() > this->_grade_execute)
	{
		throw AForm::GradeTooLowException();
		return (false);
	}
	else 
	{
		return (true);
	}
}

std::ostream &operator<<(std::ostream &out, AForm &rhs)
{
	std::cout << "AForm Name: " << rhs.get_name() << std::endl;
	std::cout << "AForm is signed: " << rhs.get_is_signed() << std::endl;
	std::cout << "AForm sign value: " << rhs.get_sign_value() << std::endl;
	std::cout << "AForm execute value: " << rhs.get_execute_value() << std::endl;
	return (out);
}
