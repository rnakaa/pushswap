/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:32:30 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/03 01:04:4 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	**arg_to_int(int argc, int argnum, char *argv[])
{
	int	i;
	int	**rep;

	i++;
	rep = malloc(sizeof(int *) * (argnum + 1));
	if(!rep)
	{
		if(argc == 2)
			free_double_pointer(argv);
		exit(1);
	}
	rep[argnum] = NULL;
	while(!argv[i])
	{
		rep[i] = malloc(sizeof(int) * 2);
		if(!rep[i])
		{
			while(i)
				free(rep[i--]);
			if(argc == 2)
				free_double_pointer(argv);
			exit(1);
		}
		i++;
	}
}

