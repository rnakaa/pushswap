/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:32 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 16:42:19 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int	rotate(t_stack **a)
{
	t_stack	*new_start;

	if (!a)
		return (1);
	if (!*a)
		return (1);
	if (!(*a)->next)
		return (1);
	new_start = (*a)->next;
	new_start->prev = NULL;
	addback(a, *a);
	*a = new_start;
	return (0);
}

void	ra(t_stack **a)
{
	if (!rotate(a))
		write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (!rotate(b))
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
