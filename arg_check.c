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

static int	arg_chek_char(char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			printf("%c\n", argv[i][j]);
			if (!isdigit(argv[i][j]) \
			&& !((argv[i][0] == '-' \
			|| argv[i][0] == '+') && !(j > 0 \
			&& !isdigit(argv[i][j])) && ft_strlen(argv[i]) > 1))
			{
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

//split->ft_split
static char	**arg_split(const char *argv[], int *argnum)
{
	char	**ingredient;
	int	i;

	i = 0;
	ingredient = ft_split(argv[1], ' ');
	while(!ingredient[i])
		i++;
	*argnum = i;
	return (ingredient);
}

static void	free_double_pointer(char **ingredient)
{
	int	i;

	i = 0;
	while (!ingredient[i])
	{
		free(ingredient[i]);
		i++;
	}
	free(ingredient[i]);
	free(ingredient);
}

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

int	arg_check(int argc, const char *argv[])
{
	char	**ingredient;
	int		argnum;

	argnum = argc - 1;
	if (argc >= 3)
		ingredient = (char **)argv + 1;
	if (argc == 2)
		ingredient = arg_split(argv, &argnum);
	if (arg_chek_char(ingredient))
	{
		if (argc == 2)
			free_double_pointer(ingredient);
		write(0, "error\n", 7);
		return (1);
	}
	ingredient = arg_to_int(argc, argnum, ingredient);
	return (0);
}
