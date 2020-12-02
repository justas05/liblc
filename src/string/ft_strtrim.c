/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:05 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:28 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*end_s;
	size_t	len1;

	if (!s1 || !set)
		return (malloc(0));
	len1 = ft_strlen(s1);
	end_s = (char*)s1 + len1 - 1;
	while (*s1 && ft_strchr(set, *s1) && len1--)
		++s1;
	while (end_s > s1 && ft_strchr(set, *end_s))
	{
		--end_s;
		--len1;
	}
	if (len1 && s1 < end_s)
		res = ft_strndup(s1, len1);
	else
	{
		res = malloc(1);
		*res = 0;
	}
	return (res);
}
