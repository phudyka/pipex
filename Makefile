# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 11:36:19 by phudyka           #+#    #+#              #
#    Updated: 2022/06/28 17:44:13 by phudyka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	pipex

SRCS	=	pipex.c path.c\

CC      = gcc

HEADER	= pipex.h

CFLAGS  = -Wall -Werror -Wextra

OBJS    = $(SRCS:.c=.o)

RM      = rm -f

AR      = ar -rc

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
