/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   345sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:08:42 by rnaka             #+#    #+#             */
/*   Updated: 2023/04/09 09:50:34 by rnaka            ###   ########.fr       */
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
		else if (fi == 3 && se == 1)
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
			if (count == 2)
				sa(a);
			if (count == 3)
				rra(a);
			if (count == 3 || count == 4)
				rra(a);
			pb(a, b);
			break ;
		}
		count++;
		look = look->next;
	}
	list_recompression(*a);
	list_recompression(*b);
}

static void	minpb(t_stack **a, t_stack **b, int count)
{
	if (count != 5)
	{
		if (count == 2)
			sa(a);
		if (count == 3 || count == 4)
			rra(a);
		if (count == 3 || count == 4)
			rra(a);
		if (count == 3)
			rra(a);
		pb(a, b);
	}
	else if (count == 5)
	{
		rra(a);
		pb(a, b);
		list_last(*a);
	}
	list_recompression(*a);
	separate4(a, b);
	return ;
}

static void	separate5(t_stack **a, t_stack **b)
{
	int		count;
	t_stack	*look;

	count = 1;
	look = *a;
	if (list_last(*a)->index == 1 || list_last(*a)->index == 2)
	{
		minpb(a, b, 5);
		return ;
	}
	while (1)
	{
		if (look->index == 2 || look->index == 1)
		{
			minpb(a, b, count);
			return ;
		}
		look = look->next;
		count++;
	}
}

void	littlesort(t_stack **a, t_stack **b, int max)
{
	if (max == 5)
		separate5(a, b);
	else if (max == 4)
		separate4(a, b);
	threesort(a, b, (*a)->index, ((*a)->next)->index);
	pa(a, b);
	if (max == 5)
		pa(a, b);
}
