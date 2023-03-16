/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:37 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 17:00:10 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int	push(t_stack **from, t_stack **to)
{
	t_stack	*stock;

	if (!from || !to)
		return (1);
	if (!*from)
		return (1);
	stock = (*from)->next;
	addfront(to, *from);
	if (!stock)
	{
		*from = NULL;
		return (0);
	}
	stock->prev = NULL;
	*from = stock;
	return (0);
}

void	pa(t_stack **a, t_stack **b)
{
	if (!push(b, a))
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (!push(a, b))
		write(1, "pb\n", 3);
}
