/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:34:42 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 19:49:06 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.h"

class	PresidentialPardonForm
{
	private:

	public:
		PresidentialPardonForm(AForm &form);
		PresidentialPardonForm(PresidentialPardonForm &rhs);
		PresidentialPardonForm &operator=(PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

};

#endif
