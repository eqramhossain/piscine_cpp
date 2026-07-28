# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/28 15:38:33 by ehossain          #+#    #+#              #
#    Updated: 2026/07/28 15:47:17 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= a.out
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -g3

SRC= A.cpp\
	 B.cpp\
	 C.cpp\
	 Base.cpp\
	 main.cpp

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
