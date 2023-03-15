/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:46:11 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/15 12:38:32 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	make_list(t_stack **a, int **num)
{
	int		i;
	t_stack	*stack;

	i = 0;
	while (num[i])
	{
		stack = (t_stack *)malloc(sizeof(t_stack));
		if (!stack)
			exit(1);
		stack_reset(stack, num[i][0]);
		addfront(a, stack);
		i++;
	}
}
