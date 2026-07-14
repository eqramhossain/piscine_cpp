/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 21:02:46 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/14 18:11:26 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"
#include "AForm.h"
#include <iostream>

int main()
{
    Intern intern;

    try
    {
        AForm *form1 = intern.makeForm("shrubbery creation", "home");
        std::cout << "Created form: " << form1->get_name() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    { 
		AForm *wrong = intern.makeForm("unknown form", "Nobody");
        std::cout << "Created form: " << wrong->get_name() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception with invalid form: " << e.what() << std::endl;
    }

    return 0;
}
