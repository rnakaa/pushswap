/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:01:57 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/14 14:06:26 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

t_stack	*list_last(t_stack *a)
{
	int	i;

	if (!a)
		return (NULL);
	i = 0;
	while (a->next != NULL)
	{
		a = a->next;
		i++;
	}
	return (a);
}