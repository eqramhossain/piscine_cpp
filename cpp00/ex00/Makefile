# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 17:30:24 by ehossain          #+#    #+#              #
#    Updated: 2026/05/05 15:56:13 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone
SRC= megaphone.cpp
OBJ= $(SRC:.cpp=.o)
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re: clean fclean all

.PHONY = re clean fclean all
