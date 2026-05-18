/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 16:34:13 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/18 20:02:34 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

int	main(int ac, char **av)
{
	if(ac != 4)
		return (std::cout << "Expected: ./Sed_is_for_losers filename s1 s2" << std::endl,1);

	std::string	filename = av[1];
	std::string	to_find = av[2];
	std::string	to_replace = av[3];
	std::string	line;
	std::size_t	index;
	char c;

	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(filename.c_str());
	if (infile.is_open())
	{
		infile.get(c);
		if (infile.eof())
		{
			std::cout << "provided file is empty" << std::endl;
			return (infile.close(), 1);
		}
		else
			infile.unget();
	}
	else if (infile.fail())
	{
		std::cout << "infile opening failed" << std::endl;
		return (1);
	}

	outfile.open((filename + ".replace").c_str());
	if (outfile.is_open())
	{
		while (std::getline(infile, line))
		{
			while (((index = line.find(to_find)) != std::string::npos) && to_find.compare(""))
			{
				line.erase(index, to_find.length());
				line.insert(index, to_replace);	
			}
			outfile << line << std::endl;
		}
	}
	else if (outfile.fail())
	{
		std::cout << "outfile creation failed" << std::endl;
		return (1);
	}

	infile.close();
	outfile.close();
	return (0);
}
