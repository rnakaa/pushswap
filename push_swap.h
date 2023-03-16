/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:45:46 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 16:24:20 by rnaka            ###   ########.fr       */
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
	int				index;
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
void	addfront(t_stack **a, t_stack *stack);
void	free_list(t_stack *a);
t_stack	*list_last(t_stack *a);
void	addback(t_stack **a, t_stack *stack);
int		swap(t_stack **a);
int		push(t_stack **from, t_stack **to);
int		rotate(t_stack **a);
int		reverse(t_stack **a);
void	prevnext(t_stack *stack, t_stack *prev, t_stack *next);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		listlen(t_stack *start);
int		list_compression(t_stack *a);
void	sort(t_stack **a, t_stack **b, int max);
void	radix(t_stack **a, t_stack **b);
void	tenpenchii(t_stack	**a);
int		is_sorted(t_stack *a);
void	littlesort(t_stack **a, t_stack**b, int max);
void	list_recompression(t_stack *a);
#endif