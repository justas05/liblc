/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

static int		ft_alloc(char **res, size_t i, size_t j)
{
	if (!(res[j] = (char*)malloc(sizeof(char) * (i + 1))))
	{
		ft_clear_strs(res, j);
		return (0);
	}
	return (1);
}

static void		ft_extract_words(char *str, char c, char **res)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (*str++)
		if (c == *(str - 1))
		{
			if (i != 0 && ft_alloc(res, i, j))
				ft_strncpy(res[j++], str - i - 1, i)[i] = 0;
			i = 0;
		}
		else
			++i;
	if (i != 0 && ft_alloc(res, i, j))
		ft_strncpy(res[j++], str - i - 1, i)[i] = 0;
}

char			**ft_split(char *str, char c)
{
	size_t	count;
	char	**res;

	if (!str)
		return (NULL);
	count = ft_word_count(str, c);
	res = (char**)malloc(sizeof(char*) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = 0;
	if (count)
		ft_extract_words(str, c, res);
	return (res);
}
