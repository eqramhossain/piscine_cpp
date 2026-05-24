# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/17 02:42:44 by ehossain          #+#    #+#              #
#    Updated: 2026/05/24 15:30:01 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= a.out
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g3

SRC= main.cpp\
	 Cat.cpp\
	 Dog.cpp\
	 Animal.cpp\
	 WrongCat.cpp\
	 WrongAnimal.cpp

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
