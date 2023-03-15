/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_addback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:37:32 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 09:37:18 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	addback(t_stack **a, t_stack *stack)
{
	t_stack	*last;

	if (!a)
		return ;
	if (!*a)
	{
		*a = stack;
		return ;
	}
	last = list_last(*a);
	last->next = stack;
	prevnext(stack, last, NULL);
}
