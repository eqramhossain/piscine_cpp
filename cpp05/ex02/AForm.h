/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:03:57 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 19:51:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <fstream>
# include <string>

class Bureaucrat;

class AForm
{
  private:
	std::string const _name;
	bool _is_signed;
	int const _grade_sign;
	int const _grade_execute;

  public:
	AForm(void);
	AForm(std::string name, int sign, int execute);
	AForm(AForm &rhs);
	AForm &operator=(AForm &rhs);
	~AForm(void);

	std::string get_name(void) const;
	bool get_is_signed(void) const;
	int  get_sign_value(void) const;
	int  get_execute_value(void) const;

	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, AForm &rhs);

#endif
