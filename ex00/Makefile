# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 23:37:14 by amakela           #+#    #+#              #
#    Updated: 2024/07/29 23:37:16 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CPPFILES	=	megaphone.cpp

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
