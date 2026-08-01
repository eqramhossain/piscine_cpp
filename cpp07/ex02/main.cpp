/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 11:50:34 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/01 19:19:20 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp.hpp"

// int main(void)
// {
// 	Array<unsigned int> a;
// 	Array<unsigned int> b(50);
// 	// Array<unsigned int> c(b);
// 	// Array<unsigned int> d = a;
//
// 	return (0);
// }

int main()
{
    std::cout << "===== DEFAULT CONSTRUCTOR =====" << std::endl;

    Array<int> empty;

    std::cout << "Size: " << empty.size() << std::endl;


    std::cout << "\n===== PARAMETERIZED CONSTRUCTOR =====" << std::endl;

    Array<int> numbers(5);

    std::cout << "Size: " << numbers.size() << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;


    std::cout << "\n===== WRITE VALUES =====" << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;


    std::cout << "\n===== OUT OF BOUNDS EXCEPTION =====" << std::endl;

    try
    {
        std::cout << numbers[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }


    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    Array<int> copy(numbers);

    std::cout << "Original: ";
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;

    std::cout << "Copy: ";
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";

    std::cout << std::endl;


    std::cout << "\n===== DEEP COPY TEST =====" << std::endl;

    copy[0] = 999;

    std::cout << "Original first element: "
              << numbers[0] << std::endl;

    std::cout << "Copy first element: "
              << copy[0] << std::endl;


    std::cout << "\n===== COPY ASSIGNMENT =====" << std::endl;

    Array<int> assigned;

    assigned = numbers;

    std::cout << "Assigned: ";

    for (unsigned int i = 0; i < assigned.size(); i++)
        std::cout << assigned[i] << " ";

    std::cout << std::endl;


    std::cout << "\n===== ASSIGNMENT DEEP COPY TEST =====" << std::endl;

    assigned[1] = 777;

    std::cout << "Original second element: "
              << numbers[1] << std::endl;

    std::cout << "Assigned second element: "
              << assigned[1] << std::endl;


    std::cout << "\n===== SELF ASSIGNMENT =====" << std::endl;

    numbers = numbers;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;


    std::cout << "\n===== CONST ACCESS =====" << std::endl;

    const Array<int> constArray(numbers);

    std::cout << "Const element: "
              << constArray[0]
              << std::endl;


    std::cout << "\n===== STRING TEMPLATE TEST =====" << std::endl;

    Array<std::string> words(3);

    words[0] = "hello";
    words[1] = "world";
    words[2] = "cpp07";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;


    std::cout << "\n===== PROGRAM END =====" << std::endl;

    return (0);
}
