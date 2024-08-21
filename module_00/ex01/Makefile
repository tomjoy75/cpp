# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 12:37:37 by tjoyeux           #+#    #+#              #
#    Updated: 2024/08/21 10:58:29 by tjoyeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= myPhoneboook
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -f

SRCS	= ./Contact.class.cpp \
		  ./PhoneBook.class.cpp \
		  ./main.cpp
OBJS	= $(SRCS:.cpp=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
