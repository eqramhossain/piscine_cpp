# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/29 12:26:31 by ehossain          #+#    #+#              #
#    Updated: 2026/07/29 16:53:25 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= a.out
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -g3 -std=c++98

SRC= main.cpp

OBJ= ${SRC:.cpp=.o}

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

.PHONY= all clean fclean re
