/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:03:57 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/09 17:29:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <fstream>
# include <string>

class Bureaucrat;

class Form
{
  private:
	std::string const _name;
	bool _is_signed;
	int const _grade_sign;
	int const _grade_execute;

  public:
	Form(std::string name, int sign, int execute);
	Form(Form &rhs);
	Form &operator=(Form &rhs);
	~Form(void);

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

std::ostream &operator<<(std::ostream &out, Form &rhs);

#endif
