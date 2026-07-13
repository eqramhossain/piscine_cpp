/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:34:42 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/13 22:37:21 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.h"
#include <string>

class	PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm(std::string target);
		// PresidentialPardonForm(PresidentialPardonForm &rhs);
		// PresidentialPardonForm &operator=(PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

		void virtual execute(Bureaucrat const &executor) const;

};

#endif
