/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:33:55 by rnaka             #+#    #+#             */
/*   Updated: 2023/02/27 13:16:06y rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int argc, char const *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		**num;

	a = NULL;
	b = NULL;
	num = NULL;
	if (argc < 2)
	{
		write(1, "error\n", 7);
		return (1);
	}
	num = arg_check(argc, argv);
	make_list(&a, num);
	tenpenchii(&a);
	coordinate_compression(a);
	radix(&a, &b);
	free_list(a);
	free_dp_int(num);
	return (0);
}
