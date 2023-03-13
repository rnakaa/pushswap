/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:21:20 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/13 20:36:17 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

static int	check_over_long(int sign, unsigned long num, char c)
{
	if (sign == 1 && (INT_MAX / 10 < num || (INT_MAX / 10 == num && INT_MAX
				% 10 < c - '0')))
	{
		write(0, "error\n", 6);
		exit(1);
	}
	if (sign == -1 && (INT_MAX / 10 < num || (INT_MAX / 10 == num && INT_MAX
				% 10 + 1 < c - '0')))
	{
		write(0, "error\n", 6);
		exit(1);
	}
	return (0);
}

int	ft_atoi(const char *s)
{
	size_t			i;
	int				sign;
	long			result;
	unsigned long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f' \
				|| s[i] == '\r' || s[i] == ' ')
		i++;
	if (s[i] == '-')
		sign = -1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (ft_isdigit(s[i]))
	{
		if (check_over_long(sign, num, s[i]) == 1)
			return ((int)LONG_MAX);
		if (check_over_long(sign, num, s[i]) == -1)
			return ((int)LONG_MIN);
		num = num * 10 + s[i++] - '0';
	}
	result = num * sign;
	return (result);
}
