/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_prevnext.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:25:05 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 09:28:28 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	prevnext(t_stack *stack, t_stack *prev, t_stack *next)
{
	stack->next = next;
	stack->prev = prev;
}