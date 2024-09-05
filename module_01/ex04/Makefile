# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 12:37:37 by tjoyeux           #+#    #+#              #
#    Updated: 2024/09/05 17:42:22 by tjoyeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= superSed
NAME_TEST	= testSed
CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98 -g3
RM			= rm -f

SRC_PATH	= ./srcs/
OBJ_PATH	= ./objs/
TEST_SRC_P	= ./test/
TEST_OBJ_P	= ./test/objs/

SRCS		= $(wildcard $(SRC_PATH)*.cpp)
OBJS		= $(addprefix $(OBJ_PATH),$(notdir $(SRCS:.cpp=.o)))
TEST_SRCS	= $(wildcard $(TEST_SRC_P)*.cpp)
TEST_OBJS	= $(addprefix $(TEST_OBJ_P),$(notdir $(TEST_SRCS:.cpp=.o)))
	
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

#__________________________________Test_____________________________________

test	: $(NAME_TEST)

$(NAME_TEST)	: $(TEST_OBJS)
	@echo "$(GREEN)$(BOLD)$(ITALIC)$$LINKING$(RESET)\n"
	@echo "$(MAGENTA)$(BOLD)Linking TEST: $(RESET)$(BLUE)$(ITALIC)$@$(RESET)"
	$(CC) $(CFLAGS) -o $(NAME_TEST) $(TEST_OBJS)

$(TEST_OBJ_P)%.o : $(TEST_SRC_P)%.cpp
	@if [ ! -f $(FLAG_FILE) ]; then touch $(FLAG_FILE); echo "$(GREEN)$(BOLD)$$COMPILATION$(RESET)"; fi
	@mkdir -p $(TEST_OBJ_P)
	@echo "$(MAGENTA)$(BOLD)Compilation TEST: $(RESET)$(BLUE)$(ITALIC)$<$(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

#________________________________Cleaning____________________________________
clean :
	@echo "$(GREEN)$(BOLD)$$CLEANING$(RESET)"
	@echo "$(MAGENTA)$(BOLD)Cleaning: $(RESET)$(BLUE)$(ITALIC)$(OBJ)$(RESET)"
	$(RM) $(OBJ_PATH)*.o
	$(RM) -r $(OBJ_PATH)
	@echo "$(MAGENTA)$(BOLD)Cleaning: $(RESET)$(BLUE)$(ITALIC)$(FLAG_FILE)$(RESET)"
	$(RM) .build_started

cleantest :
#	@echo "$(GREEN)$(BOLD)$$CLEANING$(RESET)"
	@echo "$(MAGENTA)$(BOLD)Cleaning Test: $(RESET)$(BLUE)$(ITALIC)$(OBJ)$(RESET)"
	$(RM) $(TEST_OBJ_P)*.o
	$(RM) -r $(TEST_OBJ_P)

fclean : clean cleantest
	@echo "$(MAGENTA)$(BOLD)Cleaning Working Directory: $(RESET)$(BLUE)$(ITALIC)$(OBJ)$(RESET)"
	$(RM) $(NAME)
	$(RM) $(NAME_TEST)

re : fclean all

.PHONY : all clean fclean re test cleantest

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
