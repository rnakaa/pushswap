/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:33:55 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 15:08:30 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int argc, char const *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		**num;
	int		max;

	a = NULL;
	b = NULL;
	num = NULL;
	if (argc < 1)
	{
		write(1, "error\n", 7);
		return (argc);
	}
	if (argc == 1)
		return (0);
	num = arg_check(argc, argv);
	make_list(&a, num);
	tenpenchii(&a);
	max = list_compression(a);
	sort(&a, &b, max);
	free_list(a);
	free_dp_int(num);
	return (0);
}
