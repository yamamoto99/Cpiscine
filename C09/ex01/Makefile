# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 07:26:13 by masayama          #+#    #+#              #
#    Updated: 2024/03/20 18:08:57 by masayama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = libft.a
SRCS =	./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJS = $(SRCS:%.c=%.o)
INCLUDE = -I./includes

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAG) $(INCLUDE) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
