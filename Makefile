# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcullen <zaphod@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 15:07:36 by fcullen           #+#    #+#              #
#    Updated: 2023/01/12 09:29:10 by fcullen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
DIRS		=	gnl libft lst printf
SRCS		=	$(foreach dir, $(DIRS), $(wildcard $(dir)/*.c))
OBJS		=	$(SRCS:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I./inc/

all:		$(NAME)

$(NAME):	compile $(OBJS) c_done
			@ar rcs $(NAME) $(OBJS)
			@printf "\n" 

.c.o:
			@${CC} ${CFLAGS} -o $@ -c $<
			@printf "$(GR)$(REVR) $(RC)"

compile:
			@echo "\n$(GR) Compiling ${NAME}$(RC)\n"

c_done:
			@echo "\n$(GR)100%$(RC)"

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re

# **************************************************************************** #
#								COLORS										   #
# **************************************************************************** #

REVR = \033[7m
GR = \033[32;1m
RC = \033[0m