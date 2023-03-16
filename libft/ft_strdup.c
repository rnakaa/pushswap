/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:55:16 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/16 15:13:02 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;
	char	*save;

	src = (char *)s;
	dest = malloc(ft_strlen(src)+1);
	if (dest == NULL)
		return (NULL);
	save = dest;
	while (*src)
		*save++ = *src++;
	*save = 0;
	return (dest);
}
