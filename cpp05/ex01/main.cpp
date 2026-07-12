/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:47:22 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/12 17:42:15 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

int main(void)
{

	Form id_form("ID FORM", 1, 1);
	std::cout << id_form << std::endl;

	Bureaucrat mr_slow("mr_slow", 1);
	mr_slow.signForm(id_form);

	Bureaucrat mr_id("MR_ID", 111);
	mr_id.signForm(id_form);
	
	return (0);	return (0);
}
