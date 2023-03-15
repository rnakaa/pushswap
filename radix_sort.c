/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:26:33 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 18:02:37 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	is_sorted(t_stack *a, int max)
{
	int	previndex;

	previndex = max;
	while (a)
	{
		if (a->index > previndex)
		{
			return (1);
		}
		previndex = a->index;
		a = a->next;
	}
	return (0);
}

void	radix(int max, t_stack **a, t_stack **b)
{
	if (!is_sorted(*a, max))
		return ;
	while (*b)
		max++;
}