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


void	print_all(t_stack **a, t_stack **b)
{
	t_stack	*stock;

	stock = *a;
	while (stock)
	{
		printf("a %d\n", stock->num);
		stock = stock->next;
	}
	stock = *b;
	printf("\nb\n");
	while (stock)
	{
		printf("b %d\n", stock->num);
		stock = stock->next;
	}
}

void	print_back(t_stack **a, t_stack **b)
{
	t_stack	*stock;

	stock = list_last(*a);
	printf("back\n");
	while (stock)
	{
		printf("pa %d\n", stock->num);
		stock = stock->prev;
	}
	printf("\nb\n");
	stock = list_last(*b);
	while (stock)
	{
		printf("pb %d\n", stock->num);
		stock = stock->prev;
	}
}

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
		write(0, "error\n", 7);
		return (1);
	}
	num = arg_check(argc, argv);
	make_list(&a, num);



	printf("push前\n");
	print_all(&a, &b);
	push(&a, &b);
	push(&a, &b);
	push(&a, &b);
	push(&a, &b);
	printf("\n\npush後\n");
	print_all(&a, &b);
	free_list(a);
	free_dp_int(num);
	return (0);
}
