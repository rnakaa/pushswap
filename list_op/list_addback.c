/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_addback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:37:32 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/14 14:37:28 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	list_addback(t_stack **a, t_stack *stack)
{
	if (!a)
		return ;
	if (!*a)
	{
		*a = stack;
		return ;
	}
	list_last(*a)->next = stack;
}
