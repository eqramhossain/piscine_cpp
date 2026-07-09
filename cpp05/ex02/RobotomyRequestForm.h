/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:34:10 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 19:48:57 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.h"

class	RobotmyRequestForm
{
	private:

	public:
		RobotmyRequestForm(AForm &form);
		RobotmyRequestForm(RobotmyRequestForm &rhs);
		RobotmyRequestForm &operator=(RobotmyRequestForm &rhs);
		~RobotmyRequestForm();

};

#endif
