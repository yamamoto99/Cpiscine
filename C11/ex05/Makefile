# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 07:26:13 by masayama          #+#    #+#              #
#    Updated: 2024/03/28 17:28:12 by masayama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = do-op
SRCS =	srcs/main.c \
		srcs/check_operator.c \
		srcs/culc.c \
		srcs/ft_atoi.c \
		srcs/ft_putnbr.c \
		srcs/ft_strlen.c
OBJS = $(SRCS:%.c=%.o)
INCLUDE = -I./includes

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAG) $(INCLUDE) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
