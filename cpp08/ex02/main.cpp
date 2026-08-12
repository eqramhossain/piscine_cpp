/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:32:54 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/12 19:12:27 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "MutantStack.hpp"

// int		main(void)
// {
// 	std::stack<int> st;
//
// 	for (size_t i = 0; i < 10; i++)
// 	{
// 		st.push(i);
// 		std::cout << "push i = " << i  << std::endl;
// 		std::cout << "top of stack = " << st.top() << std::endl;
// 	}
//
// 	std::cout << std::endl;
// 	std::cout << std::endl;
//
// 	for (size_t i = 0; i < 9; i++)
// 	{
// 		std::cout << "before pop st.top() = " << st.top() << std::endl;
// 		st.pop();
// 		std::cout << "pop i = " << i << std::endl;
// 		std::cout << "after pop st.top() = " << st.top() << std::endl;
// 	}
//
// }

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "size before " << mstack.size() << std::endl;
	std::cout << "top before " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "top after " << mstack.top() << std::endl;
	std::cout << "size after " << mstack.size() << std::endl;


	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack); 

	return 0;
}
