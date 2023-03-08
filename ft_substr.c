/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:53:25 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/03 10:15:52 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	if (ft_strlen(s) - (size_t)start < len)
		re = malloc(ft_strlen(s) - (size_t)start + 1);
	else
		re = malloc(len + 1);
	if (re == NULL)
		return (NULL);
	while (len != 0 && s[i] != '\0')
	{
		re[i] = s[start + i];
		i++;
		len--;
	}
	re[i] = '\0';
	return (re);
}
