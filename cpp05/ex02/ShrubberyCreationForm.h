/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:33:41 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 19:48:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.h"

class	ShrubberyCreationForm : public AForm
{
	private:

	public:
		ShrubberyCreationForm(AForm &form);
		ShrubberyCreationForm(ShrubberyCreationForm &rhs);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();

};

#endif
