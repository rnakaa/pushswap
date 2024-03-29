/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:33:55 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 17:20:08 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	print_all(t_stack **a, t_stack **b);
// void		print_back(t_stack **a, t_stack **b);
// void		check_index(t_stack **a);

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
	print_all(&a, &b);
	free_list(a);
	free_dp_int(num);
	return (0);
}

// void	check_index(t_stack **a)
// {
// 	t_stack	*stocka;
// 	stocka = *a;
// 	while (stocka)
// 	{
// 		if (stocka->index != stocka->num)
// 		{
// 			printf("NG %d\n", stocka->num);
// 			return ;
// 		}
// 		stocka = stocka->next;
// 	}
// 	printf("OK\n");
// }
void	print_all(t_stack **a, t_stack **b)
{
	t_stack	*stocka;
	t_stack	*stockb;

	stocka = *a;
	stockb = *b;
	printf("a  :  b\n");
	while (stocka || stockb)
	{
		if (stocka)
		{
			printf("%d", stocka->num);
			stocka = stocka->next;
		}
		else
			printf(" ");
		printf("  :  ");
		if (stockb)
		{
			printf("%d\n", stockb->num);
			stockb = stockb->next;
		}
		else
			printf(" \n");
	}
}

// void	print_back(t_stack **a, t_stack **b)
// {
// 	t_stack	*stocka;
// 	t_stack	*stockb;

// 	stocka = list_last(*a);
// 	stockb = list_last(*b);
// 	printf("a  :  b\n");
// 	while (stocka || stockb)
// 	{
// 		if (stocka)
// 		{
// 			printf("%d", stocka->num);
// 			stocka = stocka->prev;
// 		}
// 		else
// 			printf(" ");
// 		printf("  :  ");
// 		if (stockb)
// 		{
// 			printf("%d\n", stockb->num);
// 			stockb = stockb->prev;
// 		}
// 		else
// 			printf(" \n");
// 	}	
// }