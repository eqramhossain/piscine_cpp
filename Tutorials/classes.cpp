/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:40:51 by ehossain          #+#    #+#             */
/*   Updated: 2026/04/13 23:45:50 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyClass
{
	public:
		MyClass()
		{
			std::cout << "constructor called\n";
			postcode = 93300;
			ville = "Aubervilliers";
			country = "France";
		}
		~MyClass()
		{
			std::cout << "destructor called\n";
		}

		void ft_set_info(void)
		{
			std::cout << "what is your name" << "\n";
			std::cin >> name;
			std::cout << "what is your birth year" << "\n";
			std::cin >> birth_year;
			std::cout << "what is your mail" << "\n";
			std::cin >> mail;
			std::cout << "what is your postcode" << "\n";
			std::cin >> postcode;
			std::cout << "what is your ville" << "\n";
			std::cin >> ville;
			std::cout << "what is your country" << "\n";
			std::cin >> country;
		}

		void ft_print_info(void)
		{
			std::cout << name << "\n";
			std::cout << birth_year << "\n";
			std::cout << mail << "\n";
			std::cout << postcode << "\n";
			std::cout << ville << "\n";
			std::cout << country << "\n";
		}

	private:
		int postcode;
		std::string ville;
		std::string country;
		std::string name;
		std::string mail;
	protected:
		int id;
		int age;
		int birth_year;
};

class ChildClass : MyClass
{
	public:
		ChildClass()
		{
			id = 1;
			age =  2026 - birth_year;
		}

		void ft_print_child()
		{
			std::cout << id << "\n";
			std::cout << age << "\n";
		}
};

int main(void)
{
	MyClass obj;
	obj.ft_set_info();
	obj.ft_print_info();
	ChildClass child;
	child.ft_print_child();
	return (0);
}



