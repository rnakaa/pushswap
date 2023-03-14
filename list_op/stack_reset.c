/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:37:42 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/14 12:47:24 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	stack_reset(t_stack *stack, int num)
{
	stack->num = num;
	stack->index = -1;
	stack->next = NULL;
	stack->prev = NULL;
}
