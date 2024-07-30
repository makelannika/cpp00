# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 23:37:26 by amakela           #+#    #+#              #
#    Updated: 2024/07/30 14:11:20 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CPPFILES	=	src/phoneBook.cpp

OFILES		=	$(CPPFILES:.cpp=.o)

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
