/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:34 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 13:49:01 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	reverse(t_stack **a)
{
	t_stack	*end;
	t_stack	*new_end;

	end = list_last(*a);
	if (!a)
		return ;
	if (!end)
		return ;
	if (!end->prev)
		return ;
	new_end = end->prev;
	new_end->next = NULL;
	addfront(a, end);
	*a = end;
}

void	rra(t_stack **a)
{
	reverse(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
	write(1, "rrr\n", 4);
}