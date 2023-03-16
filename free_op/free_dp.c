/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:05:06 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 15:10:51 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	free_dp_int(int **ingredient)
{
	int	i;

	i = 0;
	while (ingredient[i])
	{
		free(ingredient[i]);
		i++;
	}
	free(ingredient[i]);
	free(ingredient);
}

void	free_dp_char(char **ingredient)
{
	int	i;

	i = 0;
	while (ingredient[i])
	{
		free(ingredient[i]);
		i++;
	}
	free(ingredient[i]);
	free(ingredient);
}
