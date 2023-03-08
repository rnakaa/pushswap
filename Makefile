# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 09:46:50 by rnaka             #+#    #+#              #
#    Updated: 2023/03/07 11:49:19 by rnaka            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS    = 	ft_strdup.c\
			arg_check.c\
			ft_split.c\
			ft_strlen.c\
			ft_substr.c\
			test.c
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
