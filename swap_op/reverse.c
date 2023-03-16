/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:34 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 16:27:25 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int	reverse(t_stack **a)
{
	t_stack	*end;
	t_stack	*new_end;

	end = list_last(*a);
	if (!a)
		return (1);
	if (!end)
		return (1);
	if (!end->prev)
		return (1);
	new_end = end->prev;
	new_end->next = NULL;
	addfront(a, end);
	*a = end;
	return (0);
}

void	rra(t_stack **a)
{
	if (!reverse(a))
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (!reverse(b))
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
	write(1, "rrr\n", 4);
}
