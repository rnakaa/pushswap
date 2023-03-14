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
	t_stack	test;
	int		**num;

	a = NULL;
	b = NULL;
	num = NULL;
	if (argc < 2)
	{
		write(0, "error\n", 7);
		return (1);
	}
	num = arg_check(argc, argv);
	make_list(&a, num);
	stack_reset(&test, 1010);
	list_addback(&b, &test);
	while (a)
	{
		printf("%d\n", a->num);
		a = a->next;
	}
	while (b)
	{
		printf("%d\n", b->num);
		b = b->next;
	}
	// a = list_last(b);
	// while (a)
	// {
	// 	printf("%d\n", a->num);
	// 	a = a->prev;
	// }
	free_list(a);
	free_dp_int(num);
	return (0);
}
