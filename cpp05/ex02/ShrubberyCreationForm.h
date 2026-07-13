/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:33:41 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 20:06:01 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.h"
#include <ostream>
#include <string>

class	ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &rhs);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm(void);

		std::string get_target(void) const;
		void virtual execute(Bureaucrat const &executor) const;

};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &rhs);

#endif
