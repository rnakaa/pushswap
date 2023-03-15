/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:37 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 11:48:31 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*stock;

	if (!from || !to)
		return ;
	if (!*from)
		return ;
	stock = (*from)->next;
	addfront(to, *from);
	if (!stock)
	{
		printf("nana");
		*from = NULL;
		return ;
	}
	stock->prev = NULL;
	*from = stock;
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
	write(0, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(0, "pb\n", 3);
}
