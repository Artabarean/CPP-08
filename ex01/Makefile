# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/22 12:32:02 by atabarea          #+#    #+#              #
#    Updated: 2026/06/23 15:39:12 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Span
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp \
		Span.cpp

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