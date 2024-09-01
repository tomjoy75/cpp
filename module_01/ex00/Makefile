# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 12:37:37 by tjoyeux           #+#    #+#              #
#    Updated: 2024/09/01 14:56:09 by tjoyeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98
RM			= rm -f

SRC_PATH	= ./srcs/
OBJ_PATH	= ./objs/

SRCS		= $(wildcard $(SRC_PATH)*.cpp)
OBJS		= $(addprefix $(OBJ_PATH),$(notdir $(SRCS:.cpp=.o)))
	
FLAG_FILE	:= .build_started

#________________________________PhoneBook___________________________________

all	: $(NAME)

$(NAME)	: $(OBJS)
	@echo "$(GREEN)$(BOLD)$(ITALIC)$$LINKING$(RESET)\n"
	@echo "$(MAGENTA)$(BOLD)Linking : $(RESET)$(BLUE)$(ITALIC)$@$(RESET)"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_PATH)%.o : $(SRC_PATH)%.cpp
	@if [ ! -f $(FLAG_FILE) ]; then touch $(FLAG_FILE); echo "$(GREEN)$(BOLD)$$COMPILATION$(RESET)"; fi
	@mkdir -p $(OBJ_PATH)
	@echo "$(MAGENTA)$(BOLD)Compilation: $(RESET)$(BLUE)$(ITALIC)$<$(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

#________________________________Cleaning____________________________________
clean :
	@echo "$(GREEN)$(BOLD)$$CLEANING$(RESET)"
	@echo "$(MAGENTA)$(BOLD)Cleaning: $(RESET)$(BLUE)$(ITALIC)$(OBJ)$(RESET)"
	$(RM) $(OBJ_PATH)*.o
	$(RM) -r $(OBJ_PATH)
	@echo "$(MAGENTA)$(BOLD)Cleaning: $(RESET)$(BLUE)$(ITALIC)$(FLAG_FILE)$(RESET)"
	$(RM) .build_started

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

#______________________________Presentation__________________________________
# Colors
RED := \033[0;31m
GREEN := \033[0;32m
BLUE := \033[0;34m
MAGENTA := \033[0;35m
RESET := \033[0m

# Style
BOLD := \033[1m
ITALIC := \033[3m
BLINK := \e[5m

define START


   ___| __ __|   \      _ \ __ __|
 \___ \    |    _ \    |   |   |
       |   |   ___ \   __ <    |
 _____/   _| _/    _\ _| \_\  _|



endef
export START

define COMPILATION


   ___|   _ \    \  |   _ \ _ _|  |         \  __ __| _ _|   _ \    \  |
  |      |   |  |\/ |  |   |  |   |        _ \    |     |   |   |    \ |
  |      |   |  |   |  ___/   |   |       ___ \   |     |   |   |  |\  |
 \____| \___/  _|  _| _|    ___| _____| _/    _\ _|   ___| \___/  _| \_|



endef
export COMPILATION

define LINKING


  |     _ _|   \  |  |  / _ _|   \  |   ___|
  |       |     \ |  ' /    |     \ |  |
  |       |   |\  |  . \    |   |\  |  |   |
 _____| ___| _| \_| _|\_\ ___| _| \_| \____|


endef
export LINKING

define CLEANING


   ___|  |      ____|     \      \  | _ _|   \  |   ___|
  |      |      __|      _ \      \ |   |     \ |  |
  |      |      |       ___ \   |\  |   |   |\  |  |   |
 \____| _____| _____| _/    _\ _| \_| ___| _| \_| \____|

endef
export CLEANING
