/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tenpenchii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:28:47 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 23:08:28 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	tenpenchii(t_stack	**a)
{
	t_stack	*stock;
	t_stack	*save;

	stock = *a;
	if (!stock)
		return ;
	*a = list_last(*a);
	while (stock)
	{
		save = stock->prev;
		stock->prev = stock->next;
		stock->next = save;
		stock = stock->prev;
	}
}