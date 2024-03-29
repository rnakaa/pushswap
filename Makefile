# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 09:46:50 by rnaka             #+#    #+#              #
#    Updated: 2023/03/23 20:21:22 by rnaka            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
DEBUG = -g -fsanitize=address  -fsanitize=undefined
CFLAGS = -Wall -Wextra -Werror
SRCS    = 	sort/sort.c\
			sort/345sort.c\
			sort/radix_sort.c\
			swap_op/swap.c\
			swap_op/push.c\
			swap_op/rotate.c\
			swap_op/reverse.c\
			libft/ft_atoi.c\
			libft/ft_split.c\
			libft/ft_substr.c\
			libft/ft_strlen.c\
			libft/ft_strdup.c\
			libft/ft_isdigit.c\
			free_op/free_dp.c\
			free_op/free_list.c\
			arg_op/arg_check.c\
			arg_op/make_list.c\
			arg_op/arg_to_int.c\
			list_op/list_len.c\
			list_op/list_last.c\
			list_op/tenpenchii.c\
			list_op/stack_reset.c\
			list_op/list_addback.c\
			list_op/list_addfront.c\
			list_op/stack_prevnext.c\
			list_op/list_compression.c\
			main.c
			# test.c
OBJS    = $(SRCS:.c=.o)

ifeq ($(shell uname), Linux)
DEBUG += -fsanitize=leak
endif
.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(OBJS)
	gcc $(CFLAGS) -o push_swap $(OBJS)

re:		fclean all
clean:
	@$(RM) -r $(OBJS)
 
fclean:		clean
	@$(RM) $(NAME)

debug:	CFLAGS += $(DEBUG)
debug:	re
.PHONY:		all clean fclean re
