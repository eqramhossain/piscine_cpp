/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:34:10 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 22:32:11 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.h"
#include <string>

class	RobotmyRequestForm : public AForm
{
	private:
		std::string _target;

	public:
		RobotmyRequestForm(void);
		RobotmyRequestForm(std::string target);
		// RobotmyRequestForm(RobotmyRequestForm &rhs);
		// RobotmyRequestForm &operator=(RobotmyRequestForm &rhs);
		~RobotmyRequestForm();

		void virtual execute(Bureaucrat const &executor) const;


};

#endif
