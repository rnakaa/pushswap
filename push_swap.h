/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:45:46 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/14 17:07:27 by rnaka            ###   ########.fr       */
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
	struct s_stack	*prev;
}			t_stack;

int		**arg_check(int argc, const char *argv[]);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
int		**arg_to_int(int argc, int argnum, char *argv[]);
void	free_dp_char(char **ingredient);
void	free_dp_int(int **a);
int		ft_atoi(const char *s);
int		ft_isdigit(int a);
void	make_list(t_stack **a, int **num);
void	stack_reset(t_stack *stack, int num);
void	list_addfront(t_stack **a, t_stack *stack);
void	free_list(t_stack *a);
t_stack	*list_last(t_stack *a);
void	list_addback(t_stack **a, t_stack *stack);
void	swap(t_stack **a);
void	push(t_stack **from, t_stack **to);
#endif
