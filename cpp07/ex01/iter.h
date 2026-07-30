/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:50:30 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/30 11:41:42 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename X, typename Y>
void	iter(X *ptr,size_t size, Y const function)
{	
	size_t i = 0;
	while(i < size)
	{
		function(ptr[i]);
		i++;
	}
}
#endif
