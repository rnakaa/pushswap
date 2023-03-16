/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:43 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 16:33:42 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int	is_sorted(t_stack *a)
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

void	sort(t_stack **a, t_stack **b, int max)
{
	if (is_sorted(*a))
	{
		if (max >= 6)
			radix(a, b);
		else if (max >= 3)
			littlesort(a, b, max);
		else
			sa(a);
	}
}
