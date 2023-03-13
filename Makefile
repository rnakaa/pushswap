# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 09:46:50 by rnaka             #+#    #+#              #
#    Updated: 2023/03/13 20:26:47 by rnaka            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS    = 	libft/ft_strdup.c\
			main.c\
			libft/ft_split.c\
			libft/ft_strlen.c\
			libft/ft_substr.c\
			libft/ft_atoi.c\
			libft/ft_isdigit.c\
			arg_to_int.c\
			arg_check.c\
			free_dp.c
OBJS    = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(OBJS)
	gcc $(CFLAGS) -o push_swap $(OBJS)

test:$(SRCS)
	gcc -o $@ $^
clean:	
		rm -f $(OBJS)
re:		fclean all
