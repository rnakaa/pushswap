/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:30 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 13:49:17 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	swap(t_stack **a)
{
	t_stack	*b;

	if (!a)
		return ;
	if (!*a)
		return ;
	if (!(*a)->next)
		return ;
	b = *a;
	*a = (*a)->next;
	b->next = (*a)->next;
	b->prev = *a;
	(*a)->next = b;
	(*a)->prev = NULL;
	if (b->next)
		(b->next)->prev = b;
}

void	sa(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}