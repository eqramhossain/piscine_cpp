# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/17 02:42:44 by ehossain          #+#    #+#              #
#    Updated: 2026/05/22 19:00:36 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ClapTrap
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g3

SRC= main.cpp\
	 ClapTrap.cpp

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
