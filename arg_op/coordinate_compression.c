/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:42:12 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 17:38:09 by rnaka            ###   ########.fr       */
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

int	coordinate_compression(t_stack *a)
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