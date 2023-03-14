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

#include"push_swap.h"

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
			if (!ft_isdigit(argv[i][j]) \
			&& !((argv[i][0] == '-' \
			|| argv[i][0] == '+') && !(j > 0 \
			&& !ft_isdigit(argv[i][j])) && ft_strlen(argv[i]) > 1))
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

static char	**arg_split(const char *argv[], int *argnum)
{
	char	**ingredient;
	int		i;

	i = 0;
	ingredient = ft_split(argv[1], ' ');
	while (ingredient[i])
		i++;
	*argnum = i;
	return (ingredient);
}

int	**arg_check(int argc, const char *argv[])
{
	char	**ingredient;
	int		argnum;
	int		**num;

	argnum = argc - 1;
	if (argc >= 3)
		ingredient = (char **)argv + 1;
	if (argc == 2)
		ingredient = arg_split(argv, &argnum);
	if (arg_chek_char(ingredient))
	{
		if (argc == 2)
			free_dp_char(ingredient);
		write(0, "error\n", 7);
		exit(1);
	}
	num = arg_to_int(argc, argnum, ingredient);
	if (argc == 2)
		free_dp_char(ingredient);
	return (num);
}
