/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:05:39 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/08 17:56:38 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <fstream>
# include <string>

class Form;

class Bureaucrat
{
  private:
	std::string _name;
	int _grade;

  public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &rhs);
	Bureaucrat &operator=(Bureaucrat &rhs);
	~Bureaucrat(void);

	void incrementGrade(void);
	void decrementGrade(void);

	std::string getName(void) const;
	int getGrade(void) const;

	void signForm(Form &form) const;

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

std::ostream &operator<<(std::ostream &out, Bureaucrat &rhs);

#endif
