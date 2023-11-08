# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diteixei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 14:28:05 by diteixei          #+#    #+#              #
#    Updated: 2023/11/06 17:07:10 by diteixei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= \
	  ft_printf.c ft_checkarg.c ft_auxfun.c ft_wristring.c ft_wrihexa.c \
	  ft_wrint.c ft_wrintu.c ft_wrimem.c

OBJS	= $(SRCS:.c=.o)

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
RM	= rm -f

NAME	= libftprintf.a

all:	 $(NAME)

$(NAME): $(OBJS)
	  $(AR) $(NAME) $(OBJS)

clean:
	  $(RM) $(OBJS)

fclean:  clean
	  $(RM) $(NAME)

re:	 fclean $(NAME)

.PHONY: all clean fclean re
