/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 11:50:34 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/31 21:07:58 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp.hpp"

int main(void)
{
	Array<unsigned int> a;
	Array<unsigned int> b(50);
	Array<unsigned int> c(b);
	Array<unsigned int> d = a;

	d.size();
	return (0);
}
