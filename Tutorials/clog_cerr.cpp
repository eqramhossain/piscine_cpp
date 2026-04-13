/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clog_cerr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:11:17 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/12 19:17:53 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::cout << "Normal output" << std::endl;

    std::clog << "This is a log message" << std::endl;

    std::cerr << "This is an error message" << std::endl;
	return (0);
}
