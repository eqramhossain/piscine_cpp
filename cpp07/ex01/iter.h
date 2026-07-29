/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:50:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/29 20:34:38 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void ft_foo(T &params)
{
	std::cout << params << std::endl;
}

template <typename X>
void	iter(X *ptr,size_t size, void (*function)(X &))
{	
	std::cout << "non const" << std::endl;
	size_t i = 0;
	while(i < size)
	{
		function(ptr[i]);
		i++;
	}
}

template <typename X, typename Y>
void	iter(X *ptr,size_t size, Y const function)
{	
	std::cout << "const" << std::endl;
	size_t i = 0;
	while(i < size)
	{
		function(ptr[i]);
		i++;
	}
}
#endif
