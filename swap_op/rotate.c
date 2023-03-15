/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:32 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 10:37:02 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	rotate(t_stack **a)
{
	t_stack	*new_start;

	if (!a)
		return ;
	if (!*a)
		return ;
	if (!(*a)->next)
		return ;
	new_start = (*a)->next;
	new_start->prev = NULL;
	addback(a, *a);
	*a = new_start;
}