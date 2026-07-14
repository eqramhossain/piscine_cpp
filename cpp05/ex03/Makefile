# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/01 15:11:00 by ehossain          #+#    #+#              #
#    Updated: 2026/07/14 17:01:59 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= a.out

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = main.cpp \
      Bureaucrat.cpp\
      AForm.cpp\
	  ShrubberyCreationForm.cpp\
	  RobotomyRequestForm.cpp\
	  PresidentialPardonForm.cpp\
	  Intern.cpp

OBJ = $(SRC:.cpp=.o)

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
