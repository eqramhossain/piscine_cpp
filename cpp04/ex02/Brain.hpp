/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:03:13 by ehossain          #+#    #+#             */
/*   Updated: 2026/05/24 18:46:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_hpp
#define Brain_hpp

#include <string>

class Brain
{
	private:
		std::string		_ideas[100];

	public:
		Brain();
		~Brain();

		Brain(Brain const &rhs);
		Brain &operator=(Brain const &rhs);

		void	setIdea(int id, std::string const idea);
		std::string getIdea(int id) const;
	
};

#endif
