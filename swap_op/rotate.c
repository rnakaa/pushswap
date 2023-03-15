/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:32 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 12:07:14 by rnaka            ###   ########.fr       */
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

void	ra(t_stack **a)
{
	rotate(a);
	write(0, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write(0, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(0, "rr\n", 3);
}