/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_addfront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:37:32 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 09:58:11 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	addfront(t_stack **a, t_stack *stack)
{
	if (!*a)
	{
		(*a) = stack;
		stack->next = NULL;
		stack->prev = NULL;
		return ;
	}
	(*a)->prev = stack;
	prevnext(stack, NULL, *a);
	(*a) = stack;
}
