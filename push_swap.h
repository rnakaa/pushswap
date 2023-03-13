/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:45:46 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/13 20:19:09 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include<stdlib.h>
# include<stdio.h>
# include<ctype.h>
# include<unistd.h>
# include<limits.h>

typedef struct s_stack
{
	int				num;
	long			index;
	struct s_stack	*next;
	struct s_stack	*previous;
}			t_stack;

int		arg_check(int argc, const char *argv[]);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
int		**arg_to_int(int argc, int argnum, char *argv[]);
void	free_dp_char(char **ingredient);
void	free_dp_int(int **a);
int		ft_atoi(const char *s);
int		ft_isdigit(int a);
#endif
