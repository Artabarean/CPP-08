# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/26 12:04:47 by atabarea          #+#    #+#              #
#    Updated: 2026/06/26 12:40:08 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Mutant
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp

OBJS	= $(SRC:.cpp=.o)

INCLUDE = -I.
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)  

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
