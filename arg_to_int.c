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

static int	argfree(int i, int *rep[], int argc, char *argv[], int argnum)
{
		while(i)
			free(rep[i--]);
		free(rep[argnum]);
		free(rep);
		if(argc == 2)
			free_double_pointer(argv);
		exit(1);
}


void	free_doublepointerint(int **ingredient)
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

static void	num_dup_check(int **indp, int argnum)
{
	int	i;
	int	j;

	i = argnum - 1;
	while(indp[i])
	{
		j = 0;
		while(j < i)
		{
			if(indp[i][0] == indp[j][0])
			{
				free_doublepointerint(indp);
				write(0, "okatiiyyo\n", 10);
				exit(1);
			}
			j++;	
		}
		i--;
	}
}

int	**arg_to_int(int argc, int argnum, char *argv[])
{
	int	i;
	int	**rep;

	i = 0;
	rep = malloc(sizeof(int *) * (argnum + 1));
	if(!rep)
	{
		if(argc == 2)
			free_double_pointer(argv);
		exit(1);
	}
	rep[argnum] = NULL;
	while(argv[i])
	{
		rep[i] = malloc(sizeof(int) * 2);
		if(!rep[i])
			argfree(i, rep, argc, argv, argnum);
		rep[i][0] = ft_atoi(argv[i]);
		rep[i][1] = '\0';
		i++;
	}
	num_dup_check(rep, argnum);
	//*****************************************************
	//int k = 0;
	//while(rep[k])
	//{
	//	int l = 0;
	//	while(rep[k][l])
	//		printf("%d\n",rep[k][l++]);
	//	printf("dasfdfa\n");
	//	k++;
	//}
	//free_double_pointerint(rep);
	//*****************************************************
	return rep;
}

