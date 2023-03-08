/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:45:46 by rnaka             #+#    #+#             */
/*   Updated: 2023/03/03 00:57:24 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H

# define TEST_H
# include<stdlib.h>
# include<stdio.h>
# include<ctype.h>
# include<unistd.h>

int		arg_check(int argc, const char *argv[]);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
#endif
