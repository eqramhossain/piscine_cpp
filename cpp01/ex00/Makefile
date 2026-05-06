# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 19:06:11 by ehossain          #+#    #+#              #
#    Updated: 2026/05/06 23:46:51 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= BraiiiiiiinnnzzzZ
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp\
     Zombie.cpp\
     newZombie.cpp\
     randomChump.cpp\

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

.PHONY= all clean fclean re
