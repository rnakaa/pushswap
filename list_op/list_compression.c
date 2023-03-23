/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_compression.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:42:12 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/24 06:29:41 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

static t_stack	*indexuntached(t_stack *a)
{
	while (a && a->index != -1)
	{
		a = a->next;
	}
	return (a);
}

int	list_compression(t_stack *a)
{
	int		max;
	int		save;
	int		re;
	t_stack	*stock;
	t_stack	*start;

	max = listlen(a);
	re = max;
	while (max)
	{
		start = indexuntached(a);
		save = start->num;
		stock = start;
		while (start)
		{
			if (save < start->num && start->index == -1)
			{
				stock = start;
				save = start->num;
			}
			start = start->next;
		}
		stock->index = max--;
	}
	return (re);
}

void	list_recompression(t_stack *a)
{
	t_stack	*start;

	start = a;
	while (a)
	{
		a->index = -1;
		a = a->next;
	}
	list_compression(start);
}
