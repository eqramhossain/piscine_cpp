/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:06:18 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 20:52:09 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include <exception>
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(1)
{
	std::cout << "Default Constructor Called Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Prarameterised Constructor called Bureaucrat" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else 
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &rhs)
{
	std::cout << "Copy Constructor called Bureaucrat" << std::endl;
	*this = rhs;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &rhs)
{
	std::cout << "Copy Assignment operator called Bureaucrat" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called Bureaucrat" << std::endl;
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

void Bureaucrat::signForm(AForm &form) const
{
	try 
	{
		form.beSigned(*this);
	}
	catch (const std::exception &e) 
	{
		std::cout << "Bureaucrat " << this->getName() << " couldn’t sign " << form.get_name() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << "Bureaucrat " << this->getName() <<  " signed Form " << form.get_name() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.canExecute(*this);
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " can't be executed " << form.get_name() << " because " << e.what() << std::endl;
		return ;
	}
	form.execute(*this);
	std::cout << this->_name << " executed " << form.get_name() << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &rhs)
{
	std::cout << rhs.getName() << ","  << " Bureaucrat Grade " << rhs.getGrade() << std::endl;
	return (out);
}
