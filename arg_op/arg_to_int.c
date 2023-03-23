/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:32:30 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/24 06:27:53 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

static int	argfree(int i, int *rep[], int argnum)
{
	while (i)
		free(rep[i--]);
	free(rep[argnum]);
	free(rep);
	write(1, "error\n", 6);
	exit(1);
}

static void	num_dup_check(int **intdp, int argnum)
{
	int	i;
	int	j;

	i = 0;
	while (intdp[i])
	{
		j = argnum - 1;
		while (j > i)
		{
			if (intdp[i][0] == intdp[j][0])
			{
				free_dp_int(intdp);
				write(1, "error\n", 6);
				exit(1);
			}
			j--;
		}
		i++;
	}
}

int	**arg_to_int(int argc, int argnum, char *argv[])
{
	int	i;
	int	**rep;

	i = 0;
	rep = malloc(sizeof(int *) * (argnum + 1));
	if (!rep)
	{
		if (argc == 2)
			free_dp_char(argv);
		exit(1);
	}
	rep[argnum] = NULL;
	while (argv[i])
	{
		rep[i] = malloc(sizeof(int) * 1);
		if (!rep[i])
			argfree(i, rep, argnum);
		rep[i][0] = ft_atoi(argv[i]);
		i++;
	}
	num_dup_check(rep, argnum);
	return (rep);
}
