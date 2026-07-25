# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/15 17:58:38 by ehossain          #+#    #+#              #
#    Updated: 2026/07/24 17:06:35 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= convert
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g3

SRC= main.cpp\
	 ScalarConverter.cpp\

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
