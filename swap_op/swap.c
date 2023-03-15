/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:30 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 10:47:08 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	swap(t_stack **a)
{
	t_stack	*b;

	if (!a)
		return ;
	if (!*a)
		return ;
	if (!(*a)->next)
		return ;
	b = *a;
	*a = (*a)->next;
	b->next = (*a)->next;
	b->prev = *a;
	(*a)->next = b;
	(*a)->prev = NULL;
	if (b->next)
		(b->next)->prev = b;
}