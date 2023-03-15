# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 09:46:50 by rnaka             #+#    #+#              #
#    Updated: 2023/03/15 12:38:05 by rnaka            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS    = 	libft/ft_atoi.c\
			libft/ft_split.c\
			libft/ft_substr.c\
			libft/ft_strlen.c\
			libft/ft_strdup.c\
			libft/ft_isdigit.c\
			arg_op/arg_check.c\
			arg_op/make_list.c\
			arg_op/arg_to_int.c\
			free_op/free_dp.c\
			free_op/free_list.c\
			list_op/list_last.c\
			list_op/stack_reset.c\
			list_op/list_addback.c\
			list_op/list_addfront.c\
			list_op/stack_prevnext.c\
			swap_op/swap.c\
			swap_op/push.c\
			swap_op/rotate.c\
			swap_op/reverse.c\
			test.c
OBJS    = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(OBJS)
	gcc $(CFLAGS) -o push_swap $(OBJS)

clean:	
		rm -f $(OBJS)
re:		fclean all
