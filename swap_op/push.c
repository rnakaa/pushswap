/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:37 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/14 18:00:19 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*stock;

	if (!from || !to)
		return ;
	if (!*from)
		return ;
	stock = (*from)->next;
	list_addfront(to, *from);
	if (!stock)
	{
		printf("nana");
		*from = NULL;
		return ;
	}
	stock->prev = NULL;
	*from = stock;
}