# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/28 16:32:20 by ehossain          #+#    #+#              #
#    Updated: 2026/07/28 16:40:24 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= a.out
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g3

SRC = Serialization.cpp\
	  main.cpp

OBJ = ${SRC:.cpp=.o}

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
