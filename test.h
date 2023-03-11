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
# include<limits.h>

int		arg_check(int argc, const char *argv[]);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
int	**arg_to_int(int argc, int argnum, char *argv[]);
void     free_double_pointer(char **ingredient);
int	ft_atoi(const char *s);
int	ft_isdigit(int a);
void	free_doublepointerint(int **a);
#endif
