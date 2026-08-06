/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:30:17 by ehossain          #+#    #+#             */
/*   Updated: 2026/08/06 20:23:57 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serialization.h"
#include <stdint.h>
#include <new>

int     main(void)
{ 
    Data *ptr = new Data;

	ptr->name = "Ekram";
	ptr->age = 42;

    uintptr_t  raw = Serialization::serialize(ptr);
    Data    *data = Serialization::deserialize(raw);
 
	std::cout << "data: " << data << '\n';
    // std::cout << "data: " << &data << '\n';

    std::cout << "ptr: " << ptr << '\n';
    // std::cout << "&ptr: " << &ptr << '\n';
    
	std::cout << "raw: " << raw << '\n';
    // std::cout << "&raw: " << &raw << '\n';
       
    std::cout << "data->name: " << data->name << std::endl;
    std::cout << "data->age: " << data->age << std::endl;

    delete ptr;
    return (0);
}
