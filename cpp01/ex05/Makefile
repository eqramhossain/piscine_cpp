# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/16 16:58:58 by ehossain          #+#    #+#              #
#    Updated: 2026/05/16 17:06:13 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = main.cpp\
      Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
