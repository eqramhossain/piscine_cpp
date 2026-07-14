/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:02:20 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/14 18:59:16 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.h"
#include <exception>
#include <string>

class Intern 
{
	private:
		std::string _form_name[3];
		AForm *callShrubbery(std::string target);
		AForm *callPresidential(std::string target);
		AForm *callRobot(std::string target);

	public:
		Intern();
		Intern(Intern &rhs);
		Intern &operator=(Intern &rhs);
		~Intern();

		AForm *makeForm(std::string name, std::string target);
		std::string stringLower(std::string name);
		class FormNameException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
