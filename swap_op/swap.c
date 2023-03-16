/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:30 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 16:25:51 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int	swap(t_stack **a)
{
	t_stack	*b;

	if (!a)
		return (1);
	if (!*a)
		return (1);
	if (!(*a)->next)
		return (1);
	b = *a;
	*a = (*a)->next;
	b->next = (*a)->next;
	b->prev = *a;
	(*a)->next = b;
	(*a)->prev = NULL;
	if (b->next)
		(b->next)->prev = b;
	return (0);
}

void	sa(t_stack **a)
{
	if (!swap(a))
		write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (!swap(b))
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	int	ai;
	int	bi;

	ai = swap(a);
	bi = swap(b);
	if (!ai && !bi)
		write(1, "ss\n", 3);
	else if (!ai)
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}
