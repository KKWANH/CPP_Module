# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 18:17:59 by kimkwanho         #+#    #+#              #
#    Updated: 2021/08/20 01:00:58 by kimkwanho        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			ClapTrap.cpp
NAME	=	ClapTrap

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:.cpp=.o)

.cpp.o:
	@echo "\033[1m\033[34m[CPP] \033[0m[Generating files] : \033[32mOK\033[0m"
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	@echo "\033[1m\033[34m[CPP] \033[0m[CPP Starting] : \033[32mOK\033[0m"
	@$(CC) -o $(NAME) $(SRCS)
	@make clean
	@echo ""
	@echo "\033[1m\033[34m[CPP] \033[0mStart $(NAME) with command ./$(NAME) [args]\033[0m"

all :
	@$(NAME)

clean :
	@echo "\033[34m[CPP]\033[0m [Delete .o files] : \033[32mOK\033[0m"
	@rm -rf $(OBJS)

fclean :
	@make clean
	@echo "\033[34m[CPP]\033[0m [Delete executable files] : \033[32mOK\033[0m"
	@rm -rf $(NAME)

re :		fclean all