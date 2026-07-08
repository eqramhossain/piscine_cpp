/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:06:18 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/03 17:00:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Default Constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else 
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &rhs)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &rhs)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default Destructor called" << std::endl;
}

void Bureaucrat::incrementGrade(void)
{	
	if (_grade > 1 && _grade < 150)	
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade > 1 && _grade < 150)	
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

// const char* Bureaucrat::GradeTooHighException::what const throw()
// {
//
// }

// std::ostream &operator<<(std::ostream &out, Bureaucrat &rhs)
// {
//
// }

std::ostream &operator<<(std::ostream &out, Bureaucrat &rhs)
{
	std::cout << rhs.getName() << ","  << " Bureaucrat Grade " << rhs.getGrade() << std::endl;
	return (out);
}
