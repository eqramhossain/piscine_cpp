/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:47:22 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/06 19:41:31 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

int main(void)
{

	Form form("maggot", 1, 1);
	std::cout << form << std::endl;

	Bureaucrat jhon("jhon", 1);
	jhon.signForm(form);

	Bureaucrat ben("ben", 111);
	ben.signForm(form);
	
	return (0);	return (0);
}
