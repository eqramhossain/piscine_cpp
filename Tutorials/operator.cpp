/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 22:50:55 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/12 18:25:34 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_stdcout(int x)
{
	std::cout << x;
	std::cout << "\n";
}

int main()
{
	// int x = 42;
	// std::cout << x;
	// int y = x;
	// std::cout << y;
	// int a = 42;
	// a += 10;
	// ft_stdcout(a);
	// a -= 10;
	// ft_stdcout(a);
	// a *= 10;
	// ft_stdcout(a);
	// a /= 10;
	// ft_stdcout(a);
	// a %= 10;
	// ft_stdcout(a);
	// // below these are not binary operation
	// i don't know what the fuck is it
	// a >>= 10;
	// ft_stdcout(a);
	// a <<= 10;
	// ft_stdcout(a);
	// a &= 10;
	// ft_stdcout(a);
	// a ^= 10;
	// ft_stdcout(a);
	// a |= 10;
	// ft_stdcout(a);
	
	// Conditional ternary operator ( ? )
	// condition ? result1 : result2
	// If condition is true, the entire expression evaluates to result1, and otherwise to result2.
	// int a,b, c;
	// a = 9;
	// b = 7;
	// c = (a == b) ? a : b;
	// std::cout << c << '\n';
	
	// Comma operator
	// int a, b;
	// a = (b = 0, b + 7);
	// first it will assign b = 0 and it will add b + 7
	// ft_stdcout(a);
	// int a = sizeof(int);
	// ft_stdcout(a);
	
	return (0);
}
