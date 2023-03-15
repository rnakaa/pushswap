/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:26:33 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 00:06:57 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	is_sorted(t_stack *a)
{
	int	previndex;

	previndex = 1;
	while (a)
	{
		if (a->index < previndex)
		{
			return (1);
		}
		previndex = a->index;
		a = a->next;
	}
	return (0);
}

void	radix(t_stack **a, t_stack **b)
{
	t_stack	*last;
	int		min;

	min = 1;
	while (is_sorted(*a))
	{
		last = list_last(*a);
		while (*a != last)
		{
			if (!((*a)->index & min))
				pb(a, b);
			else
				ra(a);
		}
		if (!((*a)->index & min))
			pb(a, b);
		else
			ra(a);
		while (*b)
			pa(a, b);
		min = min << 1;
	}
	return ;
}
