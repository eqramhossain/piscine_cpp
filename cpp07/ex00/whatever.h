/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 20:42:29 by ehossain          #+#    #+#             */
/*   Updated: 2026/07/28 21:12:50 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	// return (0);
}

template <typename T>
T min(T a, T b)
{
	if (a > b)
		return (b);
	else if (a == b)
		return (b);
	return (a);
}

template <typename T>
T max(T a, T b)
{
	if (a < b)
		return (b);
	else if (a == b)
		return (b);
	return (a);
}

#endif
