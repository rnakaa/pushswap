/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:42:12 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 16:35:33 by rnaka            ###   ########.fr       */
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

void	coordinate_compression(t_stack *a)
{
	int		max;
	int		save;
	t_stack	*stock;
	t_stack	*start;

	max = listlen(a);
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
}