/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:03:51 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 18:52:21 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"
#include <string>
#include <iostream>

Form::Form(std::string name, int sign, int execute) : _name(name), _is_signed(false), _grade_sign(sign), _grade_execute(execute)
{
	// std::cout << "Default Constructor called" << std::endl;
}

Form::Form(Form &rhs) : _name(rhs._name), _is_signed(rhs._is_signed), _grade_sign(rhs._grade_sign), _grade_execute(rhs._grade_execute)
{
	// std::cout << "Copy Constructor called" << std::endl;
}

Form	&Form::operator=(Form &rhs) 
{
	// std::cout << "Copy Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_is_signed = rhs._is_signed;
	}
	return (*this);
}

Form::~Form()
{
	// std::cout << "Default Destructor called" << std::endl;
}

std::string Form::get_name(void) const
{
	return (this->_name);
}

bool Form::get_is_signed(void) const
{
	return (this->_is_signed);
}

int Form::get_sign_value(void) const
{
	return (this->_grade_sign);
}

int Form::get_execute_value(void) const
{
	return (this->_grade_execute);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->get_sign_value() >= bureaucrat.getGrade())
	{
		_is_signed = true;
	}
	else 
	{
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

std::ostream &operator<<(std::ostream &out, Form &rhs)
{
	std::cout << "Form Name: " << rhs.get_name() << std::endl;
	std::cout << "Form is signed: " << rhs.get_is_signed() << std::endl;
	std::cout << "Form sign value: " << rhs.get_sign_value() << std::endl;
	std::cout << "Form execute value: " << rhs.get_execute_value() << std::endl;
	return (out);
}
