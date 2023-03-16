/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   345sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:08:42 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 16:40:54 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

static void	threesort(t_stack **a, t_stack **b, int fi, int se)
{
	if (!is_sorted(*b))
		sb(b);
	if (is_sorted(*a))
	{
		if (fi == 1 && se == 3)
		{
			ra(a);
			sa(a);
			rra(a);
		}
		else if (fi == 3 && se == 2)
		{
			ra(a);
			sa(a);
		}
		else if (fi == 2 && se == 1)
			sa(a);
		else if (fi == 2 && se == 3)
			rra(a);
		else
			ra(a);
	}
}

static void	separate4(t_stack **a, t_stack **b)
{
	int		count;
	t_stack	*look;

	count = 1;
	look = *a;
	while (look && count)
	{
		if (look->index == 1)
		{
			if (count == 2 || count == 3)
				sa(a);
			if (count == 3)
				sa(a);
			else if (count == 4)
				rra(a);
			pb(a, b);
			count = 0;
		}
		count++;
		look = look->next;
	}
	list_recompression(*a);
}

static void	separate5(t_stack **a, t_stack **b)
{
	int		count;
	t_stack	*look;

	count = 1;
	look = *a;
	while (look)
	{
		if (look->index == 1 || look->index == 2)
		{
			if (count == 2 || count == 3)
				sa(a);
			if (count == 3)
				sa(a);
			if (count == 4 || count == 5)
				rra(a);
			if (count == 5)
				rra(a);
			pb(a, b);
			count = 1;
			look = *a;
		}
		count++;
		look = look->next;
	}
	list_recompression(*a);
}

void	littlesort(t_stack **a, t_stack **b, int max)
{
	if (max == 5)
		separate5(a, b);
	else if (max == 4)
		separate4(a, b);
	threesort(a, b, (*a)->index, ((*a)->next)->index);
	pa(a, b);
	pa(a, b);
}
